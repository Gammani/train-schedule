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
	carriageType = "����";
	techCondition = "���������";
}

void trainBase::GetInfo()
{
	cout << "����� ������: " << train << "\n" <<
		"����� ������: " << carriage << "\n" <<
		"��� ������: " << carriageType << endl;
}

