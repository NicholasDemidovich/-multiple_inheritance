#pragma once
#include <iostream>
using namespace std;
class LawBraker//B3
{
	protected:
		char nameOfLaw[30];
	public:
		void setNameOfLaw(char* nameOfLaw);
		char* getNameOfLaw();
		void print();
		~LawBraker();
		LawBraker() {}

};

