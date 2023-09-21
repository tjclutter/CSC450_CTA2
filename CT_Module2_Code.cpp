//============================================================================
// Name        : CT_Module2_Code.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	for(int i = 0; i < 3; i++){
		char string1[100];
		cout << "Enter string 1: ";
		cin.getline(string1, 99);

		char string2[100];
		cout << "Enter string 2: ";
		cin.getline(string2, 99);

		strcat(string1, string2);
		cout << string1 << endl;
	}
}
