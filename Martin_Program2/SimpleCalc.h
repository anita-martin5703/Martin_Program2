// Anita Martin
// amartin98@cnm.edu
// First Class: SimpleCalc

// SimpleCalc.h

#ifndef SIMPLE_CALC_H
#define SIMPLE_CALC_H


#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class SimpleCalc
{
private:
	char operation{ '+' };
	double number1{ 0.0 };
	double number2{ 1.0 };
	double answer{ 1.0 };
	string results;
	string desc;
	void Calculate();

public:
	SimpleCalc(); //defalut constructor
	void SetOperation(char oper, double op1, double op2);
	string GetResults();

};

#endif // !SIMPLE_CALC_H