#include "Libra.h"

void Student::operator=(const Student& other)
{
	this->name = other.name;
	this->surname = other.surname;
	this->patronymic = other.patronymic;
	this->adress = other.adress;
	this->tel = other.tel;
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
	this->size_cred = other.size_cred;
	this->size_exam = other.size_exam;
	this->size_cours = other.size_cours;

	if (this->mark_cred != nullptr)
	{
		delete[] this->mark_cred;
	}

	if (this->mark_exam != nullptr)
	{
		delete[] this->mark_exam;
	}

	if (this->mark_cours != nullptr)
	{
		delete[] this->mark_cours;
	}

	this->mark_cours = new int[other.size_cours];

	for (int i = 0; i < other.size_cours; i++)
	{
		this->mark_cours[i] = other.mark_cours[i];
	}

	this->mark_cred = new int[other.size_cred];

	for (int i = 0; i < other.size_cred; i++)
	{
		this->mark_cred[i] = other.mark_cred[i];
	}

	this->mark_exam = new int[other.size_exam];

	for (int i = 0; i < other.size_exam; i++)
	{
		this->mark_exam[i] = other.mark_exam[i];
	}
}

Student::Student(const Student& other)
{
	this->name = other.name;
	this->surname = other.surname;
	this->patronymic = other.patronymic;
	this->adress = other.adress;
	this->tel = other.tel;
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
	this->size_cred = other.size_cred;
	this->size_exam = other.size_exam;
	this->size_cours = other.size_cours;

	this->mark_cours = new int[other.size_cours];
	for (int i = 0; i < other.size_cours; i++)
	{
		this->mark_cours[i] = other.mark_cours[i];
	}

	this->mark_cred = new int[other.size_cred];
	for (int i = 0; i < other.size_cred; i++)
	{
		this->mark_cred[i] = other.mark_cred[i];
	}

	this->mark_exam = new int[other.size_exam];
	for (int i = 0; i < other.size_exam; i++)
	{
		this->mark_exam[i] = other.mark_exam[i];
	}
}

void Student::SetDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Student::GenDate()
{
	srand(time(0));
	int y = rand() % 20 + 1980;
	int m = rand() % 12 + 1;
	int d = 1;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		d = rand() % 31 + 1;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		d = rand() % 30 + 1;
	}
	else if (m == 2 && y % 4 == 0)
	{
		d = rand() % 29 + 1;
	}
	else d = rand() % 28 + 1;

	SetDate(d, m, y);
}

void Student::SetMark_Cred(int mark)
{
	int* temp = new int[size_cred + 1];
	for (int i = 0; i < size_cred; i++)
	{
		temp[i] = mark_cred[i];
	}
	temp[size_cred] = mark;
	size_cred++;
	delete[]mark_cred;
	mark_cred = temp;
}

void Student::SetMark_Exam(int mark)
{
	int* temp = new int[size_exam + 1];
	for (int i = 0; i < size_exam; i++)
	{
		temp[i] = mark_exam[i];
	}
	temp[size_exam] = mark;
	size_exam++;
	delete[]mark_exam;
	mark_exam = temp;
}

void Student::SetMark_Cours(int mark)
{
	int* temp = new int[size_cours + 1];
	for (int i = 0; i < size_cours; i++)
	{
		temp[i] = mark_cours[i];
	}
	temp[size_cours] = mark;
	size_cours++;
	delete[]mark_cours;
	mark_cours = temp;
}

//ostream& operator << (ostream& os, const Date& date)
//{
//
//	os << date.GetDay() << "." << date.GetMonth() << "." << date.GetYear();
//	return os;
//}

void const Student::ShowStudent() const
{
	cout << "Имя\t\t\t" << name << "\n";
	cout << "Фамилия\t\t\t" << surname << "\n";
	cout << "Отчество\t\t" << patronymic << "\n";
	cout << "Дата р.\t\t\t" << day << "." << month << "." << year << "\n";
	cout << "Адрес\t\t\t" << adress << "\n";
	cout << "Телефон\t\t\t" << tel;

	cout << "\nОценки по зачетам\t";

	if (size_cred > 0)
	{
		for (int i = 0; i < size_cred; i++)
		{
			cout << mark_cred[i] << " ";
		}
	}

	cout << "\nОценки по экзаменам\t";

	if (size_exam > 0)
	{
		for (int i = 0; i < size_exam; i++)
		{
			cout << mark_exam[i] << " ";
		}
	}

	cout << "\nОценки по курсовым\t";

	if (size_cours > 0)
	{
		for (int i = 0; i < size_cours; i++)
		{
			cout << mark_cours[i] << " ";
		}
	}

	cout << "\n\n";
}

Student::~Student()
{
	cout << "Деструктор " << this << "\n";
	if (mark_cred != nullptr) delete[] mark_cred;
	if (mark_cours != nullptr) delete[] mark_cours;
	if (mark_exam != nullptr) delete[] mark_exam;
}