#include <iostream>
using namespace std;

int main()
{

    // problem 1
    // int num[10];
    // cout << "Enter your numbers:" << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> num[i];
    // }
    // cout << "Reversed:" << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << num[10 - i - 1] << " ";
    // }

    // problem 2
    // while (true)
    // {
    //     int arr1[5], arr2[5];
    //     cout << "Enter elements for array 1: ";
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cin >> arr1[i];
    //     }
    //     cout << "Enter elements for array 2: ";
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cin >> arr2[i];
    //     }

    //     bool match = true;
    //     for (int i = 0; i < 5; i++)
    //     {
    //         if (arr1[i] != arr2[i])
    //         {
    //             match = false;
    //             break;
    //         }
    //     }
    //     if (match)
    //     {
    //         cout << "Equal" << endl;
    //     }
    //     else
    //     {
    //         cout << "Not match" << endl;
    //     }

    //     char y;
    //     cout << "Do you want to continue? " << endl;
    //     cin >> y;

    //     if (y != 'y')
    //     {
    //         break;
    //     }
    // }

    // problem 3
    // char arr[5];
    // int vowel = 0;
    // cout << "Enter your character: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    //     if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
    //     {
    //         vowel++;
    //     }
    // }
    // cout << "You entered " << vowel << " vowels" << endl;

    // problem 4
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // int binary;
    // int i = 1;
    // while (num > 0)
    // {
    //     binary += (num % 2) * i;
    //     num /= 2;
    //     i *= 10;
    // }
    // cout << "Binary representation: " << binary << endl;

    // problem 5
    // int n;
    // int arr[10] = {0};
    // int revArr[10] = {0};

    // cout << "How many numbers you will enter: ";
    // cin >> n;

    // cout << "Please enter " << n << " integers :" << endl;

    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // int ntemp = n - 1;
    // for (int i = 0; i <= n; i++)
    // {
    //     revArr[i] = arr[ntemp];
    //     ntemp--;
    // }
    // // output array in reverse
    // cout << "\nThe New Array :\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << revArr[i] << "   ";
    // }

    return 0;
}