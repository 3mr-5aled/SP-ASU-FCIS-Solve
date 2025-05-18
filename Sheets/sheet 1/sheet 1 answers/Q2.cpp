#include <iostream>
using namespace std;

// Write a C++ program to test the equality of two 5-integer arrays
// (contain the same elements in the same order)
// The program repeats until the user ends it

void main()
{
	int Arr1[5], Arr2[5];
	char cont = 'Y';

	while (cont == 'Y' || cont == 'y')
	{
		bool equal = true;
		cout<<"Enter elements for array 1: ";
		for(int i=0; i<5; i++)
			cin>> Arr1[i];
	
		cout<<"Enter elements for array 2: ";
		for(int i=0; i<5; i++)
			cin>> Arr2[i];

		//testing the equality of the two arrays
		for (int i=0; i<5; i++)
		{   if(Arr1[i] != Arr2[i])
			{
				equal = false;
				break;
			}
		}

		if(equal == false) // (!equal)
			cout <<" No Match "<< endl;
		else
			cout <<" Equal "<< endl;

		cout << " Do you want to test other arrays?" << endl;
		cin >> cont;
	}

}