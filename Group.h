#pragma once
#include <iostream>
using namespace std;

class Group
{

	unsigned int SizeOfGroup = 0; // 0 студентов по умолчанию
	char* NameOfGroup = nullptr; // название группы
	char* SpecOfGroup = nullptr; // специализация группы
	unsigned int CourseNumber = 1; // номер курса

public:

	Group(unsigned int SizeOfGroup);
};

