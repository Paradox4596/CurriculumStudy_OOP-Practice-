#include <iostream>
#include "date.h"


void Calendar::PrintCalendar() const
{
	std::cout << year << "��, " << month << "��, " << date << "�� �Դϴ�." << std::endl;
}