#include <iostream>
#include <string>

#include "undgm.h"
#include "person.h"

using namespace std;

bool undgm::cheakAnswer(int n)
{
	if (n != answer)
	{
		if ((n > answer) && (n < top)) top = n;
		else if ((n < answer) && (n > bottom)) bottom = n;

		return false;
	}

	else   return true;
}

undgm::undgm() { ; }

undgm::~undgm()
{
	cout << "Up & Down 게임을 종료합니다!" << endl;
}