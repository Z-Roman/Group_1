#pragma once
#include <iostream>
using namespace std;

class Group
{

	unsigned int SizeOfGroup = 0; // 0 ��������� �� ���������
	char* NameOfGroup = nullptr; // �������� ������
	char* SpecOfGroup = nullptr; // ������������� ������
	unsigned int CourseNumber = 1; // ����� �����

public:

	Group(unsigned int SizeOfGroup);
};

