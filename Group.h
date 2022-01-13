#pragma once
#include <iostream>
#include "Student.h"
#include "Date.h"
using namespace std;

class Group
{
	Student* The_student = nullptr; // указатель на массив студентов
	unsigned int SizeOfGroup; // кол-во студентов
	char* NameOfGroup = nullptr; // название группы
	char* SpecOfGroup = nullptr; // специализация группы
	unsigned int CourseNumber; // номер курса

public:

	Group();
	Group(unsigned int SizeOfGroup);
};

