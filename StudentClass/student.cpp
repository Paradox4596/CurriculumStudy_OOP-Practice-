#include "student.h"


void Student::PrintStudent() const
{
	std::cout << "--------학생정보--------" << std::endl;
	std::cout << "이름 : "<< mName << std::endl;
	std::cout << "번호 : " << mNumber << std::endl;
	std::cout << "점수 : " << mScore << std::endl;
	std::cout << "------------------------" << std::endl;
}
