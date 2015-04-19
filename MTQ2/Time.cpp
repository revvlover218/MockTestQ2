#include <string.h>
#include <math.h>
#include <iostream>
#include "Time.h"
#include <stdexcept>

using namespace std;

Time::Time(int h, int s)
{
	hour = h;
	second = s;
}

Time::~Time()
{
}

int Time::gethour() const
{
	return hour;
}

int Time::getsecond() const
{
	return second;
}

int Time::get(int hours, int mins) const
{
	return hours, mins;
}

void Time::set(int h, int s) 
{
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}

	if (s >= 0 && s <= 59)
	{
		second = s;
	}
}

ostream &operator<< (ostream &output, const Time &t)
{

	output << t.gethour << ":" << t.getsecond;
	return output;
}


