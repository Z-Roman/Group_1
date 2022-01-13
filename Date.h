#pragma once
#include <iostream>
using namespace std;

class Date
{
	unsigned short Day;
	unsigned short Month;
	unsigned short Year;

	Date()
	{
		this->Day = 1;
		this->Month = 1;
		this->Year = 1980;
	}
	Date(unsigned short Day, unsigned short Month, unsigned short Year)
	{
		this->Day = Day;
		this->Month = Month;
		this->Year = Year;
	}

	short GetDay()
	{
		return Day;
	}
	short GetMonth()
	{
		return Month;
	}
	short GetYear()
	{
		return Year;
	}
};

