#pragma once
#include <iostream>

class Student
{
private:
	std::string mName;
	int mNumber;
	int mScore;

public:
	Student(std::string name, int number = 0, int score = 0) :
		mName(name),
		mNumber(number),
		mScore(score)
	{}
	~Student()
	{}

	void PrintStudent() const;
};