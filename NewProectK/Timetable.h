#pragma once

#include <iostream>
#include<string>
#include<fstream>
using namespace std;

class Timetable
{
public:
	Timetable();
	void sending();
	void timeSending();

protected:
	int dir;
	ofstream fout;
	string dataPath = "dataPath.txt";
	string timePath = "timePath.txt";
};


Timetable::Timetable()
{
	dir = 0;
}

void Timetable::sending()
{
	cout << "\nВыберите дату отправки" << endl <<
		"1. 23.11.2019" << endl <<
		"2. 24.11.2019" << endl <<
		"3. 26.11.2019" << endl;
	cin >> dir;
	switch (dir)
	{
	case 1: 
		cout << "Вы выбрали  дату 23.11.2019" << endl;
		fout.open(dataPath);
		fout << "23.11.2019";
		fout.close();
		break;
	case 2:
		cout << "Вы выбрали  дату 24.11.2019" << endl;
		fout.open(dataPath);
		fout << "24.11.2019";
		fout.close();
		break;
	case 3:
		cout << "Вы выбрали  дату 26.11.2019" << endl;
		fout.open(dataPath);
		fout << "26.11.2019";
		fout.close();
		break;
	default:
		break;
	}
}

void Timetable::timeSending()
{
	cout << "\nВыберите время отправки" << endl <<
		"1. 08.00" << endl <<
		"2. 10.00" << endl <<
		"3. 15.00" << endl <<
		"4. 18.00" << endl <<
		"5. 21.00" << endl;
	cin >> dir;
	switch (dir)
	{
	case 1:
		cout << "Вы выбрали  время 08.00" << endl;
		fout.open(timePath);
		fout << "08.00";
		fout.close();
		break;
	case 2:
		cout << "Вы выбрали  время 10.00" << endl;
		fout.open(timePath);
		fout << "10.00";
		fout.close();
		break;
	case 3:
		cout << "Вы выбрали  время 15.00" << endl;
		fout.open(timePath);
		fout << "15.00";
		fout.close();
		break;
	case 4:
		cout << "Вы выбрали  время 18.00" << endl;
		fout.open(timePath);
		fout << "18.00";
		fout.close();
		break;
	case 5:
		cout << "Вы выбрали  время 21.00" << endl;
		fout.open(timePath);
		fout << "21.00";
		fout.close();
		break;
	default:
		break;
	}
}
