#include "Group.h"

Group::Group()
{
	CourseNumber = 1; // по умолчанию курс 1-й
	SizeOfGroup = 0; //студентов в группе 0
}

Group::Group(unsigned int SizeOfGroup)
{
	this->SizeOfGroup = SizeOfGroup;
}
