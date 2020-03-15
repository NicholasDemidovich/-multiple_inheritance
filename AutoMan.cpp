#include "AutoMan.h"

void AutoMan::setDateOfTakeId(char* dateOfTakeId)
{
	strcpy_s(this->dateOfTakeId, dateOfTakeId);
}
char* AutoMan::getDateOfTakeId()
{
	return dateOfTakeId;
}

AutoMan::~AutoMan()
{
	cout << " Права с датой :  " << dateOfTakeId << " удалены! " << endl;
}



void AutoMan::AutoMan::print()
{
	Man::print();
	Car::print();
	LawBraker::print();
	cout << "\n\t Дата получения прав:  " << dateOfTakeId << endl;
}