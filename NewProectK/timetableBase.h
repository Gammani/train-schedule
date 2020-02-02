#pragma once

#include <iostream>
#include "Timetable.h"
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class timetableBase : public Timetable
{
public:
	int dir;
	timetableBase();
	void timeTable();
	Timetable a;
private:
	string path;
	ofstream fout;
};


timetableBase::timetableBase()
{
	dir = 0;
	path = "destination.txt";
}

void timetableBase::timeTable()
{
	cout << "\n�������� ����� ��������:" << endl <<
		"1. ��������" << endl <<
		"2. ��������" << endl <<
		"3. ���������" << endl <<
		"4. �������" << endl;
	cin >> dir;
	switch (dir)
	{
	case 1: 
		cout << "��� ������� ��������" << endl;
		fout.open(path);
		SetConsoleCP(1251);
		fout << "��������";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break;
	case 2:  
		cout << "��� ������� ��������" << endl;
		fout.open(path);
		SetConsoleCP(1251);
		fout << "��������";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break; 
	case 3: 
		cout << "��� ������� ���������" << endl; 
		fout.open(path);
		SetConsoleCP(1251);
		fout << "���������";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break;
	case 4:
		cout << "��� ������� �������" << endl; 
		fout.open(path);
		SetConsoleCP(1251);
		fout << "�������";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break;
	default:
		break;
	}

}