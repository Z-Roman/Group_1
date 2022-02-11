#include "Libra.h"

class Group
{
	Student** The_student = nullptr; // указатель на массив указателей на студентов
	unsigned int SizeOfGroup; // кол-во студентов
	char* NameOfGroup = nullptr; // название группы
	char* SpecOfGroup = nullptr; // специализация группы
	unsigned int CourseNumber; // номер курса

public:

	Group();
	Group(unsigned int SizeOfGroup);
	~Group();

	string GenPatronymic();
	string GenName();
	string GenSurname();
};

