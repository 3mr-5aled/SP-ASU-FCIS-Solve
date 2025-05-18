#include <iostream>
using namespace std;

const int numOfProducts = 4;
int serialNum[3], quantity[3], totalSales[3];
void InputProducts();
void ProductsLessThan(int quant);
int GetIndexOfHighestSales();

int main()
{

    InputProducts();

    int quant;
    cout << "Serial Numbers of the Products that has less quantity than a value entered by the user: " << endl;
    cout << "Please enter the quantity:";
    cin >> quant;
    ProductsLessThan(quant);
    cout << "Product with the highest sales" << endl;

    cout << "Product " << GetIndexOfHighestSales() + 1 << endl;

    return 0;
}

void InputProducts()
{
    cout << "Please enter the four products:" << endl;
    for (int i = 0; i < numOfProducts; i++)
    {
        cout << "Enter values of product #" << i + 1 << endl;
        cout << "Serial num: ";
        cin >> serialNum[i];
        cout << "quantity: ";
        cin >> quantity[i];
        cout << "sales: ";
        cin >> totalSales[i];
    }
}

void ProductsLessThan(int quant)
{
    for (int i = 0; i < numOfProducts; i++)
    {
        if (quantity[i] < quant)
        {
            cout << "Product " << serialNum[i] << endl;
        }
    }
}

int GetIndexOfHighestSales()
{
    int index, max = 0;
    for (int i = 0; i < numOfProducts; i++)
    {
        if (totalSales[i] > max)
        {
            max = totalSales[i];
            index = i;
        }
    }
    return index;
}