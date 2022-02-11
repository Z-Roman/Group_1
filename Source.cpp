#include "Libra.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	Group* SPU = new Group();
	SPU->AddStudent("Oleg", "Olegovich", "Olegov");
	SPU->PrintGroup();

	return 0;
}