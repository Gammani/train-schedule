#pragma once

#include <iostream>
#include "User.h"
using namespace std;

class site : public User
{
public:
	site();
	void SiteGo();

private:
	string login;
	string password;
	int id;
};


site::site()
{
	id = 0;
}

void site::SiteGo()
{
	cout << "����� ���������� �� ���� �/� '�������� ������'" << endl;
	cout << "��� ����������� ������ ������� \n\n�����: ";
	cin >> login;
	cout << "������: ";
	cin >> password;
	cout << "\n��� ������� ������ " << endl;
	User a;
	a.userInfo();
}
