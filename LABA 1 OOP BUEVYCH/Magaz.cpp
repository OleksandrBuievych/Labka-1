#include"Magaz.h"
#include<iostream>
using namespace std;

Magaz Magaz::Init(float f, int s)
{
	Magaz tmp;
	tmp.first = f;
	tmp.second = s;

	return tmp;
}

Magaz Magaz::Read()			// �������� � ���������
{
	Magaz tmp;
	cout << "Input first" << endl;
	cin >> tmp.first;
	cout << "Input Second " << endl;
	cin >> tmp.second;
	return tmp;
}

void Magaz::Cost() // ���� ������� ������ 
{
	cost = first * second;
}


void Magaz::Display() // �������� �� ����� �������� ���� ������ 
{
	if (first >= 0 && second >= 0) {
		cout << "First = " << first << endl << endl;
		cout << "Second = " << second << endl << endl;
		cout << "Cost = " << cost << endl;
	}
	else {
		cout << "Error, use only positive numbers!";
	}
}

