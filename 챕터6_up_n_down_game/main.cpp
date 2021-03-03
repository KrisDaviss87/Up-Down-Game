#include <iostream>
#include <string>

#include "person.h"
#include "undgm.h"

#include <ctime>
#include <cstdlib>

using namespace std;

int undgm::answer = 0;
int undgm::top = 99;
int undgm::bottom = 0;

//undgm의 멤버는 전부 static이기때문에 메인함수에서 객체 생성할 필요 없음

int main()
{
	srand((unsigned)time(0));
	int n = rand();
	n = n % 100;
	undgm::answer = n;

	cout << "참가자 수를 입력하세요>>";
	cin >> n;

	person* gm1 = new person[n];

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 참가자의 이름을 입력하세요>>";
		cin >> gm1[i].name;
	}

	int key = 0;

	cout << "Up & Down 게임을 시작합니다." << endl;

	while (key != 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "답은 " << undgm::bottom << "과 " << undgm::top << "사이에 있습니다." << endl;

			int n;
			cout << gm1[i].name << ">>";
			cin >> n;

			if (undgm::cheakAnswer(n)) { 
				cout << gm1[i].name << "가 이겼습니다!!" << endl;
				key = 1;
				break; 
			}
		}
	}
}