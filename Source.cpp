#include "Libra.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	Group g ("SPU121", "Development");
	g.AddStudent("Olegov", "Oleg", "Olegovich");
	g.AddStudent("Johnov", "John", "Jonovich");
	g.Sort();
	g.PrintGroup();
	
	cout << "\n\n------------------------------------\n\n";

	Group J(10);
	
	J.PrintGroup();
	J.Sort();
	J.PrintGroup();


	return 0;
}