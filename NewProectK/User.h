#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class User
{
public:
	User();
	void userInfo();
	
	string name;
	string family;
	string gender;
	
private:
	ofstream fout;
	string pathName;
	string pathFamily;
	string pathGender;
};

User::User()
{
	pathName = "name.txt";
	pathFamily = "famaly.txt";
	pathGender = "gender.txt";
}

void User::userInfo()
{
	fout.open(pathName);
	cout << "¬ведите им€: ";
	SetConsoleCP(1251);
	cin >> name;
	fout << name;
	SetConsoleCP(866);
	fout.close();
	fout.open(pathFamily);
	cout << "¬ведите ‘амилию: ";
	SetConsoleCP(1251);
	cin >> family;
	fout << family;
	SetConsoleCP(866);
	fout.close();
	fout.open(pathGender);
	cout << "¬ведите ваш пол: ";
	SetConsoleCP(1251);
	cin >> gender;
	fout << gender;
	SetConsoleCP(866);
	fout.close();
}