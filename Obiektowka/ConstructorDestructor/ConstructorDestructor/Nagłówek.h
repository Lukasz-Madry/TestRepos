#pragma once
#include <iostream>

using namespace std;

class Event
{ 
	int day, month, year;
	int hour, minutes;
	string name;

public:
	Event(string="empty" , int=15 , int=10 , int=2020 , int=18 , int=10);
	~Event();
	void load();
	void show();
};