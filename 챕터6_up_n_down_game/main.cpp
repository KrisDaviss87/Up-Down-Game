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

//undgm�� ����� ���� static�̱⶧���� �����Լ����� ��ü ������ �ʿ� ����

int main()
{
	srand((unsigned)time(0));
	int n = rand();
	n = n % 100;
	undgm::answer = n;

	cout << "������ ���� �Է��ϼ���>>";
	cin >> n;

	person* gm1 = new person[n];

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "��° �������� �̸��� �Է��ϼ���>>";
		cin >> gm1[i].name;
	}

	int key = 0;

	cout << "Up & Down ������ �����մϴ�." << endl;

	while (key != 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "���� " << undgm::bottom << "�� " << undgm::top << "���̿� �ֽ��ϴ�." << endl;

			int n;
			cout << gm1[i].name << ">>";
			cin >> n;

			if (undgm::cheakAnswer(n)) { 
				cout << gm1[i].name << "�� �̰���ϴ�!!" << endl;
				key = 1;
				break; 
			}
		}
	}
}