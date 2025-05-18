#include <iostream>
using namespace std;
const int numOfProducts = 4;

struct PRODUCT_STRUCT
{
    int serialNum, quantity, totalSales, price;
} product[numOfProducts];

void InputProducts();
void ProductsLessThan(int quant);
int GetIndexOfHighestSales();
void DisplayProducts();
void SpeicalDiscount();
void Menu();

int main()
{

    InputProducts();

    Menu();
}

void InputProducts()
{
    cout << "Please enter the four products:" << endl;
    for (int i = 0; i < numOfProducts; i++)
    {
        cout << "Enter values of product #" << i + 1 << endl;
        cout << "Serial num: ";
        cin >> product[i].serialNum;
        cout << "quantity: ";
        cin >> product[i].quantity;
        cout << "sales: ";
        cin >> product[i].totalSales;
        cout << "price: ";
        cin >> product[i].price;
    }
}

void ProductsLessThan(int quant)
{
    for (int i = 0; i < numOfProducts; i++)
    {
        if (product[i].quantity < quant)
        {
            cout << "Product " << product[i].serialNum << endl;
        }
    }
}

int GetIndexOfHighestSales()
{
    int index, max = 0;
    for (int i = 0; i < numOfProducts; i++)
    {
        if (product[i].totalSales > max)
        {
            max = product[i].totalSales;
            index = i;
        }
    }
    return index;
}

void DisplayProducts()
{
    for (int i = 0; i < numOfProducts; i++)
    {
        cout << "Product #" << i + 1 << endl;
        cout << "Serial num: " << product[i].serialNum << endl;
        cout << "quantity: " << product[i].quantity << endl;
        cout << "price: " << product[i].price << endl;
        cout << "sales: " << product[i].totalSales << endl;
    }
}

void SpeicalDiscount()
{
    for (int i = 0; i < numOfProducts; i++)
    {
        if (product[i].quantity < 6)
        {
            product[i].price = product[i].price * 0.5;
        }
    }
}

void Menu()
{
    int choice;
    do
    {
        cout << "Please enter a number: " << endl;
        cout << "Press 1 to get products that have less quantity than a certain value" << endl;
        cout << "Press 2 to Get Product with the highest sales" << endl;
        cout << "Press 3 to Apply 50% discount for products that have quantity less than 6" << endl;
        cout << "Press 4 to Display all the products" << endl;
        cout << "Press 0 to Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int quant;
            cout << "Please enter the quantity: ";
            cin >> quant;
            ProductsLessThan(quant);
            break;
        }
        case 2:
        {
            cout << "Product with the highest sales: Product " << GetIndexOfHighestSales() + 1 << endl;
            break;
        }
        case 3:
        {
            SpeicalDiscount();
            cout << "Discount applied." << endl;
            break;
        }
        case 4:
        {
            DisplayProducts();
            break;
        }
        case 0:
        {
            cout << "Exiting..." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    } while (choice != 0);
}