#include <iostream>
#include "student.h"

int main()
{
	std::string name;
	int number{};
	int score{};

	std::cout << "�л��� 1)�̸� 2)��ȣ 3)���� ������� ���ڸ� �Է��ϼ���." << std::endl;
	std::cin >> name >> number >> score;

	Student MyStudent{name,number,score};
	MyStudent.PrintStudent();
}