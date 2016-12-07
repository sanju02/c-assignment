#pragma once
#include "DateTime.h"

class TimeAllocation
{
public:
	TimeAllocation(string, string);
	~TimeAllocation();
	virtual string Entrydetails() = 0;

	string getStart();
	string getEnd();
private:
	DateTime start;
	DateTime end;

};

