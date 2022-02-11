#include "Libra.h"


class Student
{
	string name;
	string surname;
	string patronymic;
	string adress = "No adress";
	string tel = "No tel";
	int day = 1;
	int month = 1;
	int year = 2000;
	int size_cred = 0;
	int size_exam = 0;
	int size_cours = 0;
	int count_marks = 0;
	int* mark_cred = nullptr;
	int* mark_exam = nullptr;
	int* mark_cours = nullptr;

public:

	Student() : Student("No name", "No surname", "No patronymic", "No adress", "No tel", 1, 1, 2000) {}

	Student(string surname, string name, string patronymic) : Student(surname, name, patronymic, "No adress", "No tel", 1, 1, 2000) {}

	Student(string surname, string name, string patronymic, string adress, string tel, int day, int month, int year)
	{
		SetName(name);
		SetSurname(surname);
		SetPatronymic(patronymic);
		SetAdress(adress);
		SetTel(tel);
		SetDate(day, month, year);
	}

	void SetName(string name)
	{
		this->name = name;
	}
	void SetSurname(string surname)
	{
		this->surname = surname;
	}
	void SetPatronymic(string patronymic)
	{
		this->patronymic = patronymic;
	}
	void SetAdress(string adress)
	{
		this->adress = adress;
	}
	void SetTel(string tel)
	{
		this->tel = tel;
	}
	void SetDate(int day, int month, int year);
	void SetMark_Cred(int mark);
	void SetMark_Exam(int mark);
	void SetMark_Cours(int mark);

	void ShowStudent();
	void operator = (const Student& other);
	Student(const Student& other);
	~Student();
};

