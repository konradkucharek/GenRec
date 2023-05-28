#include<bits/stdc++.h> 
#include<iostream>

using namespace std; 
  
// Function to print the output 
void printTheArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
	{ 
		cout << arr[i] << " "; 
	} 
	cout << endl; 
} 

// Function to generate all binary strings 
void generateAllBinaryStrings(int n, int arr[], int i) 
{ 
	if (i == n) 
	{ 
		printTheArray(arr, n); 
		return; 
	} 
	
	// Assigns "0" at ith position and try for all other
    // permutations for remaining positions 
	arr[i] = 0; 
	generateAllBinaryStrings(n, arr, i + 1); 
	
    // Assign "1" at ith position 
    // and try for all other permutations 
    // for remaining positions 
	arr[i] = 1;      
	generateAllBinaryStrings(n, arr, i + 1);    
		
	arr[i] = 2;
	generateAllBinaryStrings(n, arr, i + 1);		
}
 
int main() 
{ 
	for(int n = 0; n<=2; n++)
	{                                                                
		int arr[n]; 
    
		// Print all binary strings 
		generateAllBinaryStrings(n, arr, 0); 
    }                                                                                                           

return 0; 
}
