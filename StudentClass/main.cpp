#include <iostream>
#include "student.h"

int main()
{
	std::string name;
	int number{};
	int score{};

	std::cout << "학생의 1)이름 2)번호 3)점수 순서대로 숫자를 입력하세요." << std::endl;
	std::cin >> name >> number >> score;

	Student MyStudent{name,number,score};
	MyStudent.PrintStudent();
}