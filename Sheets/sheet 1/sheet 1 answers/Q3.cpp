#include <iostream>
using namespace std;

// Write a C++ program that reads 5-character values 
// The program counts the vowel letters

void main()
{
	char Arr[5];
	char vowel_chars[5] = {'a', 'e', 'i', 'o', 'u'};
	int  counter = 0;
	cout << "Enter your characters: " << endl;

	for (int i=0; i<5; i++)
	{
		cin>> Arr[i];
		for (int j=0; j<5; j++)
		  if (Arr[i] == vowel_chars[j]) 
			counter++;
	}
	cout<<"You entered "<< counter << " vowels\n";
	
	// without using an array for vowel letters
	// if (Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'a' || Arr[i] == 'o' || Arr[i] == 'u' )
	
}