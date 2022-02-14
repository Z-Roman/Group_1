#include "Libra.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	Group g ("SPU121", "Development");
	g.AddStudent("Olegov", "Oleg", "Olegovich");
	g.AddStudent("Johnov", "John", "Jonovich");
	g.AddStudent("Alexov", "Ben", "Mihalych");
	g.AddStudent("Baranov", "Nik", "Fedorovich");
	g.AddStudent("Comarov", "Fedor", "Jakovich");
	g.AddStudent("Durov", "Pavel", "Kotovich");
	g.Sort();
	g.PrintGroup();

	return 0;
}