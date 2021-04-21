//
//  hello_world.cpp
//
//  Created by Michael Haworth on 20/04/2021.
//

#include "std_lib_facilities.h"
int main ()     // C++ programs start by executing the function main
{
//read name and age
	
	{
	cout << "Please enter your first name and age\n";
	string first_name = "???";  // string variable
	double age = 0;            // integer variable
	cin >> first_name >> age;  // read a string
		cout << "Hello, " << first_name << " (age " << age*12 << ")\n";
	}

	return 0;
}
