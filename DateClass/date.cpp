#include <iostream>
#include "date.h"


void Calendar::PrintCalendar() const
{
	std::cout << year << "년, " << month << "월, " << date << "일 입니다." << std::endl;
}