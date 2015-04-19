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

	output << t.hour << ":" << t.second;
	return output;
}

Time &Time::operator++()
{
	increment();
	return *this;
}

void Time::increment()
{
	if (hour >= 0 && hour <= 23)
	{
		if (second < 59)
		{
			++second;
		}
		else if (second > 59)
		{
			++hour;
			second = 0;
		}
	}

	else if (hour > 23)
	{
		hour = 0;
	}

}