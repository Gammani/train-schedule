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
	cout << "\nВыберите номер маршрута:" << endl <<
		"1. Алмазное" << endl <<
		"2. Шахтерск" << endl <<
		"3. Приозерск" << endl <<
		"4. Боровое" << endl;
	cin >> dir;
	switch (dir)
	{
	case 1: 
		cout << "Ваш маршрут Алмазное" << endl;
		fout.open(path);
		SetConsoleCP(1251);
		fout << "Алмазное";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break;
	case 2:  
		cout << "Ваш маршрут Шахтерск" << endl;
		fout.open(path);
		SetConsoleCP(1251);
		fout << "Шахтерск";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break; 
	case 3: 
		cout << "Ваш маршрут Приозерск" << endl; 
		fout.open(path);
		SetConsoleCP(1251);
		fout << "Приозерск";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break;
	case 4:
		cout << "Ваш маршрут Боровое" << endl; 
		fout.open(path);
		SetConsoleCP(1251);
		fout << "Боровое";
		SetConsoleCP(866);
		fout.close();
		a.sending();
		a.timeSending();
		break;
	default:
		break;
	}

}