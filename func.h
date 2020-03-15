#pragma once
#include <iostream>
using namespace std;
#include "Police.h"
void createDepartment(int* maxCountAutoMans)
{
	cout << "\n\t Введите кол-во автолюителей которые в данном участке ГАИ:  ";
	cin >> *maxCountAutoMans;
}


void enterAutoMan(int maxCountAutoMan, int* factCountAutoMan, Police* dep[])
{

	int n = *factCountAutoMan;
	if (n == maxCountAutoMan) { cout << "\n\t Места нет!!!\n"; return; }

	char surname[30];
	int dateOfBirth;
	int id;

	char mark[30];
	double cost;

	char nameOfLaw[30];

	char dateOfTakeId[30];

	char adresOfDepartnment[30];
	int idDepartment;

	dep[n] = new Police();
	cout << "\n\t Введите фамилию автовладельца:  ";
	cin >> surname;
	dep[n]->setSurname(surname);

	cout << "\n\t Введите дату рождения:  ";
	cin >> dateOfBirth;
	dep[n]->setDateOfBirth(dateOfBirth);

	cout << "\n\t Введите id автовладельца:  ";
	cin >> id;
	dep[n]->setId(id);

	cout << "\n\t Введите марку машины:  ";
	cin >> mark;
	dep[n]->setMark(mark);

	cout << "\n\t Введите стоимость машины:  ";
	cin >> cost;
	dep[n]->setCost(cost);

	cout << "\n\t Введите тип нарушения:  ";
	cin >> nameOfLaw;
	dep[n]->setNameOfLaw(nameOfLaw);

	cout << "\n\t Введите дату получения прав:  ";
	cin >> dateOfTakeId;
	dep[n]->setDateOfTakeId(dateOfTakeId);

	cout << "\n\t Введите адрес отдела:  ";
	cin >> adresOfDepartnment;
	dep[n]->setAdresOfDeprtment(adresOfDepartnment);

	cout << "\n\t Введите id отдела:  ";
	cin >> idDepartment;
	dep[n]->setIdDepartment(idDepartment);
	(*factCountAutoMan)++;
}

void delAutoMan(int* factCountAutoMan, Police* dep[])
{
	char surname[20];
	cout << "\n\t Введите фамилию удаляемого автовладельца:  ";
	cin >> surname;
	for (int i = 0; i < *factCountAutoMan; i++)
	{
		if (strcmp(surname, dep[i]->Man::getSurname()) == 0)
		{
			delete dep[i];
			for (int j = i; j < (*factCountAutoMan) - 1; j++)
				dep[j] = dep[j + 1];
			(*factCountAutoMan)--;
			return;
		}
	}
	cout << "\n\t Такого автовладельца нет:  " << surname << endl;
}

void printPoliceDep(int factCountAutoMan, Police* dep[])
{
	cout << "\n\t\t Список автовладельцев в отеделе " << endl;
	for (int i = 0; i < factCountAutoMan; i++) dep[i]->print();
}