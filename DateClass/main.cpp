#include <iostream>
#include "date.h"

int main()
{
	int y{}, m{}, d{};

	std::cout << "년/월/일 순서대로 숫자를 입력하세요." << std::endl;
	std::cin >> y >> m >> d;

	Calendar myCalendar(y,m,d);

	myCalendar.PrintCalendar();
}