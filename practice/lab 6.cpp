#include <iostream>
using namespace std;

// void order(int &num1, int &num2, int &num3);
// void swap(int &num1, int &num2);

// void input(int arr[]);
// void duplicate(int arr[]);
// void display(int arr[]);

void input(int a[], int b[]);
void checkEqual(int a[], int b[]);

int main()
{

    // int num1, num2, num3;

    // cout << "Enter three numbers: ";
    // cin >> num1 >> num2 >> num3;

    // cout << "Before ordering: " << num1 << " " << num2 << " " << num3 << endl;
    // order(num1, num2, num3);
    // cout << "After ordering: " << num1 << " " << num2 << " " << num3 << endl;

    // int arr[5];
    // input(arr);
    // duplicate(arr);
    // display(arr);

    // int a[5], b[5];
    // input(a, b);
    // checkEqual(a, b);

    return 0;
}

// void input(int a[], int b[])
// {
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> b[i];
//     }
// }
// void checkEqual(int a[], int b[])
// {
//     bool equal = true;
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] != b[i])
//         {
//             equal = false;
//             break;
//         }
//     }

//     if (equal)
//     {
//         cout << "Arrays are equal" << endl;
//     }
//     else
//     {
//         cout << "Arrays are not equal" << endl;
//     }
// }

// void input(int arr[])
// {
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
// }
// void duplicate(int arr[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] *= 2;
//     }
// }
// void display(int arr[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void order(int &num1, int &num2, int &num3)
// {
//     if (num1 > num2)
//     {
//         swap(num1, num2);
//     }
//     if (num2 > num3)
//     {
//         swap(num2, num3);
//     }
//     if (num1 > num2)
//     {
//         swap(num1, num2);
//     }
// }

// void swap(int &num1, int &num2)
// {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }