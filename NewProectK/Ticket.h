#pragma once

#include<iostream>
#include "trainBase.h"
#include <fstream>
using namespace std;

class Ticket : public trainBase
{
public:
	Ticket();
	void ticketInfo();

private:
	string dataPath;
	string timePath;
	string path;
	string pathName;
	string pathFamily;
	string pathGender;
	trainBase base;
	ifstream fin;
};

Ticket::Ticket()
{
	dataPath = "dataPath.txt";
	timePath = "timePath.txt";
	path = "destination.txt";
	pathName = "name.txt";
	pathFamily = "famaly.txt";
	pathGender = "gender.txt";
}

void Ticket::ticketInfo()
{
	cout << "Ваш Билет" << endl << endl;

	fin.open(dataPath);
	string data;
	fin >> data;
	fin.close();

	fin.open(timePath);
	string time;
	fin >> time;
	fin.close();

	fin.open(path);
	string path;
	fin >> path;
	fin.close();

	fin.open(pathName);
	string Name;
	fin >> Name;
	fin.close();

	fin.open(pathFamily);
	string Family;
	fin >> Family;
	fin.close();

	fin.open(pathGender);
	string Gender;
	fin >> Gender;
	fin.close();

	cout << "Имя: " << Name << " Фамилия: " << Family << " пол: " << Gender << endl
		<< "Дата отправки: " << data << " время отправки: " << time << " пункт назначения: " << path << endl;
	   	 
	base.GetInfo();
}