#pragma once
#include <iostream>
#include "Man.h"
#include "Car.h"
#include "LawBraker.h"
using namespace std;
class AutoMan :virtual public Man, virtual public Car, virtual public LawBraker//D1
{	
	protected:
		char dateOfTakeId[30];
	public:
		void setDateOfTakeId(char* dateOfTakeId);
		char* getDateOfTakeId();
		virtual void print();
		~AutoMan();
		AutoMan() {}
};

