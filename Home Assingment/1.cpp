#include <iostream>
using namespace std;

int main()
{

    const int numberOfProducts = 3;
    int basePrice[3], taxes[3], max[3];
    for (int i = 0; i < numberOfProducts; i++)
    {
        cout << "Data of Product #" << i + 1 << endl;
        cout << "Enter base price of the product : ";
        cin >> basePrice[i];
        cout << "Enter taxes of the product : ";
        cin >> taxes[i];
        cout << "Enter maximum price of the belonging production line : ";
        cin >> max[i];

        // calc net price
        int netPrice;
        netPrice = basePrice[i] + basePrice[i] * taxes[i] / 100;

        cout << "Net Price is : " << netPrice << endl;
        if (netPrice > max[i])
        {
            cout << "Product net price exceeds the production line limit maximum price." << endl;
        }
        else
        {
            cout << "Product net price is accepted." << endl;
        }
    }

    return 0;
}