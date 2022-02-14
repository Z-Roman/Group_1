#include "Libra.h"

class Group
{
	Student** Students = nullptr; // указатель на массив указателей на студентов
	unsigned int SizeOfGroup; // кол-во студентов
	unsigned int CourseNumber; // номер курса
	string NameOfGroup; // название группы
	string SpecOfGroup; // специализация группы
	int current_year = 2022;

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
	
	void SetCurrentYear(int current_year);
	void AddStudent(string surname, string name, string patronimic);
	void const Sort() const;
	void PrintGroup();
	void GenStudent();

	string GenPatronymic();
	string GenName();
	string GenSurname();
};

