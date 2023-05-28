#include<iostream>
#include <queue>
#include<string>
using namespace std;

//-------------------------------------------------------
// Write a recognizer in C++ for L = {x | x is a binary number}.
// Name: Konrad Kucharek
//-------------------------------------------------------

//  The recognizer function should return TRUE or FALSE 
//  checking each character
//  to make sure it is 0 or 1. (leading 0's are allowed).
bool recognizer(string s)
{
	int n = s.length(); // n is the length of the user input string.

	for(int i=0; i<n; i++) // Loop through the entirety of the entered string
	{
		if(s[i]!='0' &&  s[i]!='1') // Case requirements for the recognizer
			return false;	// False if fails to meet the requirements
	}
	return true; // otherwise, the string passes the requirements and is a valid string for 
				 //this recognizer / grammar
}

//main: Given a string (from E) cined from the user, pass it to
//      the recognizer function.
//      Cout "YES IN L" or "NO NOT IN L" depending on what was returned.
int main()
{
	string s;
	cout << "Enter a string to be checked: (Type END to quit)" << endl;
	cin >> s; // First string's input happens here

	while(true && s!="END") // Allows for termination of program. Otherwise, program keeps running.
	{
		if(recognizer(s) == true)  
		{
			cout << "YES IN L" << endl;
		}
		else
		{
			cout << "NO NOT IN L" << endl;
		}
		cin >> s; // Next string's input happens here. Allows for program termination as well.
	}
	return 0;
}
