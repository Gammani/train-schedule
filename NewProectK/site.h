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
	cout << "Добро пожаловать на сайт ж/д 'Полярная Звезда'" << endl;
	cout << "Для продолжения работы введите \n\nлогин: ";
	cin >> login;
	cout << "пароль: ";
	cin >> password;
	cout << "\nДля покупки билета " << endl;
	User a;
	a.userInfo();
}
