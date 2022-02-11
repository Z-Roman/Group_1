#include "Libra.h"

class Group
{
	Student** Students = nullptr; // указатель на массив указателей на студентов
	unsigned int SizeOfGroup; // кол-во студентов
	unsigned int CourseNumber; // номер курса
	string NameOfGroup; // название группы
	string SpecOfGroup; // специализация группы

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

