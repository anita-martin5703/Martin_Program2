// Anita Martin
// amartin98@cnm.edu
// First Class: SimpleCalc

// SimpleCalc.cpp

#include "SimpleCalc.h"

void SimpleCalc::Calculate()
{

    switch (operation)
    {
    case '+':
        answer = number1 + number2;
        desc = "Your operation chosen is addition.\n";
        cout << desc;
        break;
    case '-':
        answer = number1 - number2;
        desc = "Your operation chosen is subtraction.\n";
        cout << desc;
        break;
    case '*':
        answer = number1 * number2;
        desc = "Your operation chosen is multiplication.\n";
        cout << desc;
        break;
    case '/':
        // Check for division by 0
        try
        {
            if (number2 > 0)
            {
                answer = number1 / number2;
                desc = "Your operation chosen is division.\n";
                cout << desc;
            }
            else
            {
                throw(number2);
            }
        }
        catch(double num2)
        {
            cout << "Exception Handling Warning: \n";
        }
        break;
    default:
        break;
    }
}

SimpleCalc::SimpleCalc(){}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
    number1 = op1;
    number2 = op2;
    operation = oper;
    Calculate();
}

string SimpleCalc::GetResults()
{    stringstream ss;

    // Need to take care of the case by division by 0
        if (operation == '/' && number2 <= 0)
        {
            cout << "Your are not allowed to divide by 0.\n";
        }
        else
        {
            // Create a string that matches the spec
            ss << "\t" << number1 << " " << operation << " " << number2
                << " = " << answer;

            results = ss.str();
        }

    return results;
}