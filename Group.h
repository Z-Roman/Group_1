#include "Libra.h"

class Group
{
	Student** Students = nullptr; // ��������� �� ������ ���������� �� ���������
	unsigned int SizeOfGroup; // ���-�� ���������
	unsigned int CourseNumber; // ����� �����
	string NameOfGroup; // �������� ������
	string SpecOfGroup; // ������������� ������

public:

	Group();
	Group(unsigned int SizeOfGroup);
	Group(string NameOfGroup, string SpecOfGroup);
	~Group();

	void SetNameOfGroup(string NameOfGroup);
	void SetSpecOfGroup(string SpecOfGroup);
	string GetNameOfGroup();
	string GetSpecOfGroup();
	unsigned int GetSizeOfGroup();
	unsigned int GetCourseNumber();
	


	void AddStudent(string surname, string name, string patronimic);
	void PrintGroup();

	string GenPatronymic();
	string GenName();
	string GenSurname();
};

