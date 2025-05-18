#include <iostream>
using namespace std;

void q1();
void absloute(int arr[], int n);
void print(int arr[], int n);

void q2();
void operation(char numbers[], int n);

void q3();

int main()
{

    // q1();
    // q2();
    q3();

    return 0;
}

void q1()
{
    int n;
    cout << "Enter total no. of elements(1 - 20): ";
    cin >> n;
    cout << "Enter elements: ";
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    absloute(arr, n);
    print(arr, n);
}

void absloute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] *= -1;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void q2()
{
    const int n = 10;
    cout << "Enter your array: " << endl;
    char numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    operation(numbers, n);
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << endl;
    }
}

void operation(char numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] != '0')
        {
            if (numbers[i] % 2 == 0)
            {
                numbers[i] = '*';
            }
            else
            {
                numbers[i] = '%';
            }
        }
    }
}

void q3()
{
    int balance = 1000;
    char exitFlag;
    do
    {
        int option;
        cout << "Enter 1 for deposit, 2 for withdraw, 3 for balance: ";
        cin >> option;
        if (option == 1)
        {
            int deposit;
            cout << "Enter deposit amount: ";
            cin >> deposit;
            balance += deposit;
        }
        else if (option == 2)
        {
            int withdraw;
            cout << "Enter withdraw amount: ";
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "Insufficient balance" << endl;
            }
            else
            {
                balance -= withdraw;
            }
        }
        else if (option == 3)
        {
            cout << "Your balance is: " << balance << endl;
        }
        else
        {
            cout << "Invalid option" << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> exitFlag;
    } while (exitFlag != 'N');
}