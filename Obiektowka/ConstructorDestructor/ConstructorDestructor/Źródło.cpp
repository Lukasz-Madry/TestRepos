#include <iostream>
#include "Nag³ówek.h"
using namespace std;

void Event::load()
{
	cout << endl << "Nazwa: " << endl;
	cin >> name;
	cout << endl << "Dzien: " << endl;
	cin >> day;
	cout << endl << "Miesiac: " << endl;
	cin >> month;
	cout << endl << "Dzien: " << endl;
	cin >> day;
	cout << endl << "Rok: " << endl;
	cin >> year;
	cout << endl << "Godzina: " << endl;
	cin >> hour;
	cout << endl << "Minut: " << endl;
	cin >> minutes;
}

void Event::show()
{
	cout << endl << name << " " << day << " " << month << "." << year << " " << hour << ":" << minutes << endl;
}
Event::Event(string n, int d, int m, int y, int h, int mi)
{
	name = n;
	day = d;
	month = m;
	year = y;
	hour = h;
	minutes = mi;
}
Event::~Event()
{
	cout << endl << "Destruktor. Aktywacja" << endl;
}
