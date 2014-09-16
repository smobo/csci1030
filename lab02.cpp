// Lab02.cpp
//
// Author:		Daniel Windsor 100344670
// Date:		16/09/2014
// Description: Lab 02 - Temperature Conversion

#include "stdafx.h"

#include <iostream>
using namespade std;


double _tmain(int argc, _TCHAR* [argv])
{
	// Vars
	double inTemp,outTemp;
	
	//Takes input from user
	cout << "Enter temperature in Celsius: ";
	cin >> inTemp;
	
	// For the temperature conversion, I'm using the formula F = C*1.8 + 32 degrees. 
	outTemp = intemp*1.8+ 32;
	cout << endl << "The temperature in Fahrenheit is: " << outTemp;
	return outTemp;
}
