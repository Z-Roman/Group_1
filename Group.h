#pragma once
#include <iostream>
#include "Student.h"
#include "Date.h"
using namespace std;

class Group
{
	Student* The_student = nullptr; // ��������� �� ������ ���������
	unsigned int SizeOfGroup; // ���-�� ���������
	char* NameOfGroup = nullptr; // �������� ������
	char* SpecOfGroup = nullptr; // ������������� ������
	unsigned int CourseNumber; // ����� �����

public:

	Group();
	Group(unsigned int SizeOfGroup);
};

