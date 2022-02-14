#include "Libra.h"

Group::Group() : Group("No Group Name", "No Spec. Of Group")
{
}

Group::Group(unsigned int SizeOfGroup) : Group("No Group Name", "No Spec. Of Group")
{	
	for (int i = 0; i < SizeOfGroup; i++)
	{
		GenStudent();
	}
}

Group::Group(string NameOfGroup, string SpecOfGroup)
{
	this->NameOfGroup = NameOfGroup;
	this->SpecOfGroup = SpecOfGroup;
	CourseNumber = 1; // default course 1
	SizeOfGroup = 0; //students by default 0
}

Group::~Group()
{

}
////////////////////////////////////////////////// Setters //////////////////////////////////////
void Group::SetNameOfGroup(string NameOfGroup)
{
	this->NameOfGroup = NameOfGroup;
}

void Group::SetSpecOfGroup(string SpecOfGroup)
{
	this->SpecOfGroup = SpecOfGroup;
}
//////////////////////////////////////////////////// Getters /////////////////////////////////////
string const Group::GetNameOfGroup() const
{
	return this->NameOfGroup;
}

string const Group::GetSpecOfGroup() const
{
	return this->SpecOfGroup;
}

unsigned int const Group::GetSizeOfGroup() const
{
	return this->SizeOfGroup;
}

unsigned int const Group::GetCourseNumber() const
{
	return this->CourseNumber;
}
//////////////////////////////////////////////// methods ///////////////////////////////////////

void Group::AddStudent(string surname, string name, string patronymic)
{
	Student** temp = new Student * [SizeOfGroup + 1];
	for (int i = 0; i < SizeOfGroup; i++)
	{
		temp[i] = Students[i];
	}

	Student* NewStudent = new Student(surname, name, patronymic);
	temp[SizeOfGroup] = NewStudent;
	delete[]Students;
	Students = temp;
	SizeOfGroup++;
}

void const Group::Sort() const
{
	cout << "\nSort\n";
	for (int i = 0; i < SizeOfGroup; i++)
	{
		for (int j = SizeOfGroup - 1; j > i; j--)
		{
			if (Students[i]->GetSurname() > Students[j]->GetSurname())
			{
				swap(Students[i], Students[j]);
			}
		}
	}
}



void Group::PrintGroup()
{
	cout << "Group:\t\t\t" << GetNameOfGroup() << "\n";
	cout << "Specialization:\t\t" << GetSpecOfGroup() << "\n";
	cout << "Course:\t\t\t" << GetCourseNumber() << "\n";
	cout << "Number of students:\t" << GetSizeOfGroup() << "\n";
	for (int i = 0; i < SizeOfGroup; i++)
	{
		cout << i + 1 << ". " << Students[i]->GetSurname() << " " << Students[i]->GetName()
			<< " " << Students[i]->GetPatronymic() << "\n";
	}
	
}

void Group::GenStudent()
{
	AddStudent(GenSurname(), GenName(), GenPatronymic());
	//Student** temp = new Student * [SizeOfGroup + 1];
	//for (int i = 0; i < SizeOfGroup; i++)
	//{
	//	temp[i] = Students[i];
	//}
	//temp[SizeOfGroup] = Student(surname, name, patronymic);

}

string Group::GenPatronymic()
{
	switch (rand() % 10)
	{
	case 0: return "Nikolaevich";
	case 1: return "Viktorovich";
	case 2: return "Vladimirovich";
	case 3: return "Petrovich";
	case 4: return "Alexandrovich";
	case 5: return "Vladislavovich";
	case 6: return "Igorevich";
	case 7: return "Samovich";
	case 8: return "Mihaylovich";
	case 9: return "Sergeevich";
	}
}

string Group::GenName()
{
	switch (rand() % 10)
	{
	case 0: return "Vano";
	case 1: return "Peter";
	case 2: return "Roni";
	case 3: return "Nik";
	case 4: return "Alex";
	case 5: return "Vlad";
	case 6: return "Igor";
	case 7: return "Sam";
	case 8: return "Miho";
	case 9: return "Serg";
	}
}

string Group::GenSurname()
{
	switch (rand() % 10)
	{
	case 0: return "Vanovskiy";
	case 1: return "Petrovskiy";
	case 2: return "Ronov";
	case 3: return "Nikiforov";
	case 4: return "Alexoff";
	case 5: return "Vladlen";
	case 6: return "Igoruk";
	case 7: return "Samko";
	case 8: return "Mihodjan";
	case 9: return "Sergeev";
	}
}
