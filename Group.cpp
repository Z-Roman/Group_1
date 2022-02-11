#include "Libra.h"

Group::Group()
{
	CourseNumber = 1; // default course 1
	SizeOfGroup = 0; //students by default 0
}

Group::Group(unsigned int SizeOfGroup)
{
	this->SizeOfGroup = SizeOfGroup;
	//Students[SizeOfGroup];
	
}

Group::~Group()
{
	if (NameOfGroup != nullptr) delete[] NameOfGroup;
	if (SpecOfGroup != nullptr) delete[] SpecOfGroup;
}

void Group::AddStudent(string surname, string name, string patronymic)
{
	Student** temp = new Student * [SizeOfGroup + 1];
	for (int i = 0; i < SizeOfGroup; i++)
	{
		temp[i] = Students[i];
	}

	Student* NewStudent = new Student(name, surname, patronymic);
}

string Group::GenPatronymic()
{
	int i = rand() % 10;

	switch (i)
	{
	case:0 return "Nikolaevich";
	case:1 return "Viktorovich";
	case:2 return "Vladimirovich";
	case:3 return "Petrovich";
	case:4 return "Alexandrovich";
	case:5 return "Vladislavovich";
	case:6 return "Igorevich";
	case:7 return "Samovich";
	case:8 return "Mihaylovich";
	case:9 return "Sergeevich";
	}
}

string Group::GenName()
{
	int i = rand() % 10;

	switch (i)
	{
	case:0 return "Vano";
	case:1 return "Peter";
	case:2 return "Roni";
	case:3 return "Nik";
	case:4 return "Alex";
	case:5 return "Vlad";
	case:6 return "Igor";
	case:7 return "Sam";
	case:8 return "Miho";
	case:9 return "Serg";
	}
}

string Group::GenSurname()
{
	int i = rand() % 10;

	switch (i)
	{
	case:0 return "Vanovskiy";
	case:1 return "Petrovskiy";
	case:2 return "Ronov";
	case:3 return "Nikiforov";
	case:4 return "Alexoff";
	case:5 return "Vladlen";
	case:6 return "Igoruk";
	case:7 return "Samko";
	case:8 return "Mihodjan";
	case:9 return "Sergeev";
	}
}