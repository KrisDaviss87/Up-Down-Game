#ifndef UNDGM_H
#define UNDGM_H

#include <iostream>

using namespace std;

class undgm
{
public:
	static bool cheakAnswer(int n);
	
	static int answer;
	static int top;
	static int bottom;

	undgm();
	~undgm();
};


#endif // !UNDGM_H