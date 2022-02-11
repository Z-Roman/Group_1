#include "Libra.h"

class Group
{
	Student** Students = nullptr; // указатель на массив указателей на студентов
	unsigned int SizeOfGroup; // кол-во студентов
	char* NameOfGroup = nullptr; // название группы
	char* SpecOfGroup = nullptr; // специализация группы
	unsigned int CourseNumber; // номер курса

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

