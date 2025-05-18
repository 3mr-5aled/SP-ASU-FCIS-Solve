#include <iostream>
using namespace std;

bool isPrime(int n);
void DisplayFactors(int n);
int GCD(int a, int b);
int LCM(int a, int b);
bool Armstrong(int n);

int main()
{

    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << num << " is " << (isPrime(num) ? "Prime" : "Not Prime") << endl;

    cout << "Factors of " << num << " are: ";
    DisplayFactors(num);

    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << GCD(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is: " << LCM(a, b) << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " is " << (Armstrong(n) ? "Armstrong" : "Not Armstrong") << endl;

    return 0;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void DisplayFactors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int LCM(int a, int b)
{
    return a * b / GCD(a, b);
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

bool Armstrong(int n)
{
    int sum = 0;
    int temp = n;
    while (temp)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return sum == n;
}