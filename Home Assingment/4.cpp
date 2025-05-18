#include <iostream>
using namespace std;

#define size 10

struct product
{
    int serialnumber;
    int quantity;
    int sales;
    int price;
};

int Menu();
void InputProducts(product products[], int numOfProducts);
void ProductsLessThan(int quantity, product products[], int numOfProducts);
int GetIndexOfHighestSales(product products[], int numOfProducts);
void Discount(product products[], int numOfProducts);
void PriceLessThan(product products[], int numOfProducts, int amount, int &count);
void PrintProducts(product products[], int numOfProducts);

int main()
{

    product products[size];
    int numOfProducts;
    cout << "Enter the number of products:";
    cin >> numOfProducts;

    if (numOfProducts > 10) // make sure not to exceed the array size
        cout << "Invalid number of products\n";
    else
    {
        InputProducts(products, numOfProducts);
        char choice;
        do
        {
            int functionNum = Menu();

            switch (functionNum)
            {
            case 1:
                int p;
                cout << "Please enter the quantity: ";
                cin >> p;
                ProductsLessThan(p, products, numOfProducts);
                break;
            case 2:
                cout << "Product " << GetIndexOfHighestSales(products, numOfProducts) << endl;
                break;
            case 3:
                Discount(products, numOfProducts);
                cout << "Discount Applied." << endl;
                break;
            case 4:
                int count;
                int amount;
                cout << "Enter the amount :";
                cin >> amount;
                PriceLessThan(products, numOfProducts, amount, count);
                cout << "The number of products with price less than " << amount << " is " << count << endl;
                break;
            case 5:
                PrintProducts(products, numOfProducts);
                break;
            }
            cout << "Do you want to Apply Another function, Press 'Y' or 'y' for yes, any other key to stop :";
            cin >> choice;

        } while (choice == 'Y' || choice == 'y');
    }

    return 0;
}

int Menu()
{
    int ch;
    cout << "\n--------------------------------------------------" << endl;
    cout << "Press 1 to get products that has less quantity than a certain value" << endl;
    cout << "Press 2 to Get Product with the highest sales" << endl;
    cout << "Press 3 to Apply 50% discount for products that has quantity less than 6" << endl;
    cout << "Press 4 to count the number of products with prices less than a certain amount" << endl;
    cout << "Press 5 to Display all the products" << endl;
    cin >> ch;
    return ch;
}

void InputProducts(product products[size], int numOfProducts)
{
    cout << "Please enter the " << numOfProducts << " products:" << endl;
    for (int i = 0; i < numOfProducts; i++) // to interate through the products
    {
        cout << "Enter values of product " << i + 1 << endl;

        cout << "Serial num :";
        cin >> products[i].serialnumber;
        cout << "quantity:";
        cin >> products[i].quantity;
        cout << "sales :";
        cin >> products[i].sales;
        cout << "price :";
        cin >> products[i].price;
    }
}

void ProductsLessThan(int quantity, product products[size], int numOfProducts)
{
    for (int i = 0; i < numOfProducts; i++)
    {
        if (products[i].quantity < quantity)
            cout << "Product " << products[i].serialnumber << endl;
    }
}

int GetIndexOfHighestSales(product products[size], int numOfProducts)
{
    int max = products[0].sales; // intialize with the sales of the first product
    int maxindex = 0;
    for (int i = 1; i < numOfProducts; i++)
    {
        if (max < products[i].sales)
        {
            max = products[i].sales;
            maxindex = i;
        }
    }
    return maxindex + 1;
}

void Discount(product products[size], int numOfProducts)
{
    for (int i = 0; i < numOfProducts; i++)
    {
        if (products[i].quantity < 6)                      // Checking on the amount
            products[i].price -= products[i].price * 0.50; // apply the discount
    }
}

void PriceLessThan(product products[size], int numOfProducts, int amount, int &count)
{
    count = 0;
    for (int i = 0; i < numOfProducts; i++)
    {
        if (products[i].price < amount)
            count++;
    }
}

void PrintProducts(product products[size], int numOfProducts)
{
    for (int i = 0; i < numOfProducts; i++) // to interate through the products
    {
        cout << "Serial num :" << products[i].serialnumber << endl;
        cout << "quantity:" << products[i].quantity << endl;
        cout << "sales :" << products[i].sales << endl;
        cout << "price :" << products[i].price << endl;
    }
}
