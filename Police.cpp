#include "Police.h"

void Police::setAdresOfDeprtment(char* adres)
{
	strcpy_s(this->adresOfDepartnment, adres);
}
char* Police::getAdresOfDepartment()
{
	return adresOfDepartnment;
}
void  Police::setIdDepartment(int idDep)
{
	this->idDepartment = idDep;
}
int  Police::getId()
{
	return idDepartment;
}

Police::~Police()
{
	cout << " Отедл с id :  " << idDepartment << " удален! " << endl;
}


void Police::print()
{
	AutoMan::print();
	cout << "\n\t Адрес отдела:  " << adresOfDepartnment << "  Id отдела:  " << idDepartment << endl;
	cout << "\t ===================================" << endl;
}