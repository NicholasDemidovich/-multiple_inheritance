#pragma once
#include <iostream>
#include "AutoMan.h"
using namespace std;
class Police :public AutoMan//D2
{
		char adresOfDepartnment[30];
		int idDepartment;
	public:
		void setAdresOfDeprtment(char* adres);
		char* getAdresOfDepartment();
		void setIdDepartment(int idDep);
		int getId();
		void print();
		~Police();
		Police() {}
};

