#include <iostream>
using namespace std;

int convertToDozens(int num)
{
    return num / 12;
}

void Problem1();
void Problem2();
void Problem3();
void Problem4();

int main()
{
    // Problem1();
    // Problem2();
    // Problem3();
    Problem4();

    return 0;
}

void Problem1()
{
    int num;
    cout << "Enter number of pens: ";
    cin >> num;
    int dozens = convertToDozens(num);
    if (dozens >= 6)
        cout << "Okay" << endl;
    else
        cout << "Not enough" << endl;
}

void Problem2()
{
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    int res = 0;
    for (int i = 0; i < num2; i++)
    {
        res += num1;
    }

    // int product = num1 * num2;
    cout << "Product = " << res << endl;
}

void Problem3()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int first = 0;
    int second = 1;
    for (int i = 0; i < num; i++)
    {
        cout << first << " ";
        int temp = first;
        first = second;
        second = temp + second;
    }
    cout << endl;
}

void Problem4()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int count = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << count << '\t';
            count++;
        }
        cout << endl;
    }
}