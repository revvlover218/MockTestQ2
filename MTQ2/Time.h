#include <string.h>
#include <iostream>
#ifndef TIME_H
#define Time_H

using namespace std;

class Time {

private:
	int hour;
	int second;

public:

	Time(int, int);		//Constructor
	~Time();		//Destructor
   
	int gethour() const; //Accessor
	int getsecond() const; 

	int get(int, int) const;

	void set(int, int);  //Mutator

	friend ostream& operator<< (ostream&, const Time &);


};

#endif 