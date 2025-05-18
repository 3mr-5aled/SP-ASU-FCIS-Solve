#include <iostream>
using namespace std;

int main()
{
    int decimal;
    int binary[32];
    int index = 0;

    // Prompt the user to enter a decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Handling the case for 0
    if (decimal == 0)
    {
        cout << "Binary: 0" << endl;
    }
    else
    {
        // Converting decimal to binary
        while (decimal > 0)
        {
            binary[index] = decimal % 2; // Storing the remainder
            decimal /= 2;                // Updating the decimal value
            index++;
        }

        // Printing the binary representation in reverse order
        cout << "Binary: ";
        for (int i = index - 1; i >= 0; i--)
        {
            cout << binary[i];
        }
        cout << endl;
    }
    return 0;
}