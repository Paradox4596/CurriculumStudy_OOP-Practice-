#include <iostream>
#include "date.h"

int main()
{
	int y{}, m{}, d{};

	std::cout << "��/��/�� ������� ���ڸ� �Է��ϼ���." << std::endl;
	std::cin >> y >> m >> d;

	Calendar myCalendar(y,m,d);

	myCalendar.PrintCalendar();
}