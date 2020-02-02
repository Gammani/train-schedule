#include "Ticket.h"
#include "User.h"
#include "Timetable.h"
#include "trainBase.h"
#include "timetableBase.h"
#include "site.h"

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	site a;
	a.SiteGo();
	system("pause");
	system("cls");

	timetableBase b;
	b.timeTable();
	system("pause");
	system("cls");

	Ticket c;
	c.ticketInfo();

	return 0;
}