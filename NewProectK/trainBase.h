#pragma once

#include <iostream>
#include <ctime>
using namespace std;


class trainBase
{
public:
	trainBase();
	void GetInfo();
	

private:
	int train;
	int carriage;
	string carriageType;
	string techCondition;
	int places;
};



trainBase::trainBase()
{
	train = rand() % 200;
	carriage = rand() % 30;
	carriageType = "купе";
	techCondition = "исправлен";
}

void trainBase::GetInfo()
{
	cout << "Номер поезда: " << train << "\n" <<
		"Номер вагона: " << carriage << "\n" <<
		"Тип вагона: " << carriageType << endl;
}

