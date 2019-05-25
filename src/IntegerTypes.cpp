/*
 * IntegerTypes.cpp
 *
 *  Created on: 25 May 2019
 *      Author: Dave
 */

#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int intValue = -65432;	// default is a signed value, meaning it can be + or -

	cout << "Max int value = " << INT_MAX << endl;
	cout << "Min int value = " << INT_MIN << endl;

	cout << "Size of int: " << sizeof(int) << " bytes " << endl;
	cout << "Size of short int: " << sizeof(short int) << " bytes " << endl;
	cout << "Size of double int: " << sizeof(double) << " bytes " << endl;

	unsigned int uValue = 2345678;	// Unsigned value means it can only be +, this can be useful for saving memory as we don't need to worry about - values

	cout << "signed value is: " << intValue << endl;
	cout << "unsigned uValue is " << uValue << endl;

	unsigned int value = -12345;
	cout << "\nYou will still be allowed to place a negative operator in front of \n"
			" any unsigned int value, but however this will only return you nonsense \n"
			" and will not be the value of the original unsigned variable.\n" << endl;

	cout << "For example the original variable is the value -12345, but because it \n"
			" it is unsigned it SHOULD NOT be negative and so ends up providing \n"
			" the value : " << value << " when it is used in code" << endl;

	return 0;
}


