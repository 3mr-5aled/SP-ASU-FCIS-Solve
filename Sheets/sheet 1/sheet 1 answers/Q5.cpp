#include <iostream>
using namespace std;

int main()
{
	// variables
	int n; 
	int arr[10] = { 0 }; 
	int revArr[10] = { 0 };
  
	// input
	cout << "How many numbers you will enter: "; 
	cin >> n;

	cout << "Please enter " << n << " integers :" <<endl ;

	for (int i = 0;i < n;i++)
		cin >> arr[i];
 // processing
	int ntemp = n-1;
	for (int i = 0;i <= n;i++)
	{
		revArr[i] = arr[ntemp];
		ntemp--;
	}
	//output array in reverse
  	cout<<"\nThe New Array :\n";
	for (int i = 0;i < n;i++)
	{
		cout << revArr[i] << "   ";
	}
	return 0;
} // end main
