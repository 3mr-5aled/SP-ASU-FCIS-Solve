#include <iostream>
using namespace std;

//Write a C++ program that reads 20 integer numbers and displays them in reversed order

int main()
{
	int Arr[20];

	cout <<"Enter your numbers: "<< endl;

	for (int i=0; i<20; i++)
		cin >> Arr[i];

	// to print the 20 numbers in reversed order we'll start from index 19
	cout <<"Reversed: "<<endl;

	for (int i=19; i>=0; i--)
		cout << Arr[i] << " ";

	return 0;
}