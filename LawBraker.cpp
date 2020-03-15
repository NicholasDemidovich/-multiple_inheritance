#include "LawBraker.h"


void LawBraker::setNameOfLaw(char* nameOfLaw)
{

	strcpy_s(this->nameOfLaw, nameOfLaw);
}
char* LawBraker::getNameOfLaw()
{
	return nameOfLaw;
}

LawBraker::~LawBraker()
{
	cout << " Удалено нарушение:  " << nameOfLaw << endl;
}

void LawBraker::print()
{
	cout << "\n\t Тип нарушения:  " << nameOfLaw << endl;
}