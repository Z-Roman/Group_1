#include "Libra.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	Group g ("SPU121", "Development");
	SPU->AddStudent("Oleg", "Olegovich", "Olegov");
	SPU->PrintGroup();

	return 0;
}