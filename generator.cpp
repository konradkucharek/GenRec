#include<iostream>
#include<string>
#include<queue>
using namespace std;
// include queue.h or equivalent such as <queue>

//----------------------------------------------
// Write a generator in C++ for L = {x | x is a binary number}.
// Name: Konrad Kucharek
//----------------------------------------------

// Copy the recognizer function here from the other file.

bool recognizer(string s)
{
        int n = s.length(); // Makes n the length of the string that is cin-ed from the user
		
		// Loop through all characters of the user input
        for(int i=0; i<n; i++) 
        {
			// Any character other than any combination of zeros and ones will result in an error
            if(s[i]!='0' and s[i]!='1') 
				return false;
        }
        return true;
}

//   main: It should create each string over E = {0,1,2} systematically
//   (short to long) and pass each string to the recognizer function
//   Use a queue to generate strings
//   Only those strings for which the recognizer returned TRUE
//   should be displayed
//   Keeps on going until the queue overflows, but the user can 
//   terminate the program with control-C 
//   after about 20 strings have been displayed.
int main()
{
	queue<string>q; // A queue of strings
		
	q.push("0");
	q.push("1");
	q.push("2");
	
	int count=0; // Initialize counter to 0
	
	while(count<90)
	{
		string temp = q.front(); // Generate a string

		if(recognizer(temp)==true) // If the recognizer says true, display it
    		{
			cout << temp << endl;
			string rplc = temp;
			temp.append("0");
			q.push(temp);
			temp = rplc;
			temp.append("1");
                        q.push(temp);
                 	temp = rplc;
			temp.append("2");
			q.push(temp);
		}
		q.pop();
		count++;
	} 
	return 0;
}
