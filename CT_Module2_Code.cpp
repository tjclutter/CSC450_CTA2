//Included libraries and
//using namespace std
#include <iostream>
#include <string.h>
using namespace std;

//declare main function
int main() {
	//for loop to iterate three times
	for(int i = 0; i < 3; i++){
		//declare character array of size 100
		char string1[100];
		//prompt user for input
		cout << "Enter string 1: ";
		//get user input and store in string1
		cin.getline(string1, 99);

		//declare string array of size 100
		char string2[100];
		//prompt user for input
		cout << "Enter string 2: ";
		//store user input in string2
		cin.getline(string2, 99);

		//concatenate two strings
		strcat(string1, string2);
		//display concatenated string to user
		cout << string1 << endl;
	}
}
