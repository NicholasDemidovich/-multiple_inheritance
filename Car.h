#pragma once
#include <iostream>
using namespace std;
class Car//B2
{
	protected:
		char mark[30];
		double cost;
	public:
		void setMark(char* mark);
		char* getMark();
		void setCost(double cost);
		double getCost();
		void print();
		~Car();
		Car() {}
};

