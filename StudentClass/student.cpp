#include "student.h"


void Student::PrintStudent() const
{
	std::cout << "--------�л�����--------" << std::endl;
	std::cout << "�̸� : "<< mName << std::endl;
	std::cout << "��ȣ : " << mNumber << std::endl;
	std::cout << "���� : " << mScore << std::endl;
	std::cout << "------------------------" << std::endl;
}
