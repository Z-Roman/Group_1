#include "Libra.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	Group g ("SPU121", "Development");
	g.AddStudent("Olegov", "Oleg", "Olegovich");
	g.AddStudent("Johnov", "John", "Jonovich");
	g.PrintGroup();

	return 0;
}