#pragma once

class Calendar
{
private:
	int year;
	int month;
	int date;

public:
	Calendar(int y = 0, int m = 0, int d = 0) : 
		year(y), 
		month(m), 
		date(d)
	{}
	~Calendar()
	{}

	void PrintCalendar() const;
};