#include <iostream>

using namespace std;

int convertToBinary(int n);
void insertValue(int arr[], int n, int x, int i);

int main()
{
    // Question 1

    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;
    // int *arr = new int[n];
    // cout << "Enter the elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "The binary representation of the elements are: ";

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ---> " << convertToBinary(arr[i]) << endl;
    // }

    // Question 2

    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be inserted: ";
    int x;
    cin >> x;
    cout << "Enter the position to insert the element: ";
    int i;
    cin >> i;
    if (i < 0 || i > n)
    {
        cout << "Invalid position!" << endl;
        return 1;
    }
    int *newArr = new int[n + 1];
    insertValue(newArr, n, x, i);
    for (int j = 0; j < n + 1; j++)
    {
        arr[j] = newArr[j];
    }
    cout << "Array after insertion: ";
    for (int j = 0; j < n + 1; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] newArr;

    return 0;
}

int convertToBinary(int n)
{
    int binary = 0, base = 1;
    while (n > 0)
    {
        int last_digit = n % 2;
        n /= 2;
        binary += last_digit * base;
        base *= 10;
    }
    return binary;
}

void insertValue(int arr[], int n, int x, int i)
{
    for (int j = n; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = x;
}