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

	const string const GetNameOfGroup() const;
	const string const GetSpecOfGroup() const;
	const unsigned int const GetSizeOfGroup() const;
	const unsigned int const GetCourseNumber() const;
	
	void AddStudent(string surname, string name, string patronimic);
	void const Sort() const;
	void PrintGroup();

	string GenPatronymic();
	string GenName();
	string GenSurname();
};

