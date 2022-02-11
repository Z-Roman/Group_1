#include "Libra.h"

class Group
{
	Student** Students = nullptr; // ��������� �� ������ ���������� �� ���������
	unsigned int SizeOfGroup; // ���-�� ���������
	char* NameOfGroup = nullptr; // �������� ������
	char* SpecOfGroup = nullptr; // ������������� ������
	unsigned int CourseNumber; // ����� �����

public:

	Group();
	Group(unsigned int SizeOfGroup);
	Group(char* NameOfGroup, char* SpecOfGroup);
	~Group();

	void AddStudent(string surname, string name, string patronimic);
	void PrintGroup();

	string GenPatronymic();
	string GenName();
	string GenSurname();
};

