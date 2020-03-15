#pragma once
#include <iostream>
using namespace std;
class Man//B1
{
	protected:
		char surname[30];
		int dateOfBirth;
		int id;
	public:
		void setSurname(char* surname);
		char* getSurname();
		void setDateOfBirth(int dateOfBirth);
		int getDateOfBirth();
		void setId(int id);
		int getId();
		void print();
		~Man();
		Man() {}
};

