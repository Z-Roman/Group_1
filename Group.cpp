#include "Group.h"

Group::Group()
{
	CourseNumber = 1; // �� ��������� ���� 1-�
	SizeOfGroup = 0; //��������� � ������ 0
}

Group::Group(unsigned int SizeOfGroup)
{
	this->SizeOfGroup = SizeOfGroup;
}
