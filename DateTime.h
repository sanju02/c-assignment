#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

class DateTime
{
public:
	DateTime();
	~DateTime();
	DateTime(string);             // parse from a string format
	string getFormatted() const;  // return as a formatted string

private:
	int minute; // 0 to 59
	int hour;   // 0 to 23
	int day;    // 1 to 31
	int month;  // 1 to 12
	int year;
};