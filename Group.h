#include "Libra.h"

class Group
{
	Student** The_student = nullptr; // ��������� �� ������ ���������� �� ���������
	unsigned int SizeOfGroup; // ���-�� ���������
	char* NameOfGroup = nullptr; // �������� ������
	char* SpecOfGroup = nullptr; // ������������� ������
	unsigned int CourseNumber; // ����� �����

public:

	Group();
	Group(unsigned int SizeOfGroup);
	~Group();

	string GenPatronymic();
	string GenName();
	string GenSurname();
};

