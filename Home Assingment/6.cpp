//
//  main.cpp
//  Sp1
//
//  Created by Esraa Hamdi Abbas on 4/13/21.
//  Copyright © 2021 Esraa Hamdi Abbas. All rights reserved.
//

#include <iostream>
using namespace std;

#define size 10

struct product
{
    int serialnumber;
    int quantity;
    int sales[4][7];
    int price;
};

int Menu();
void InputProducts(product products[], int numOfProducts);
void ProductsLessThan(int quantity, product products[], int numOfProducts);
void Discount(product products[], int numOfProducts);
void PriceLessThan(product products[], int numOfProducts, int amount, int &count);
void PrintProducts(product products[], int numOfProducts);
void maxSales(product products[], int numOfProducts, int productNum, int weekNum);
float avgSales(product products[], int numOfProducts, int productNum);
void printSales(int sales[][7], int saleamount);

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
                int productNum, week;
                cout << "Enter the product number ";
                cin >> productNum;
                cout << "Enter the week ";
                cin >> week;
                maxSales(products, numOfProducts, productNum - 1, week - 1);
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
                cout << "Enter the product number: ";
                int productNum1;
                cin >> productNum1;
                int saleamount;
                cout << "Enter the number of sales: ";
                cin >> saleamount;
                printSales(products->sales, saleamount);
                break;
            case 6:
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
    cout << "Press 2 to get the maximum sales of a certain product in a certain week" << endl;
    cout << "Press 3 to Apply 50% discount for products that has quantity less than 6" << endl;
    cout << "Press 4 to count the number of products with prices less than a certain amount" << endl;
    cout << "Press 5 to print the sales of a product greater than a certain amount." << endl;
    cout << "Press 6 to Display all the products" << endl;
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

        for (int j = 0; j < 4; j++)
        {
            cout << "Enter the 7 sales for week " << j + 1 << endl;
            for (int k = 0; k < 7; k++)
                cin >> products[i].sales[j][k];
        }
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
        cout << "price :" << products[i].price << endl;
        cout << "Average Sales :" << avgSales(products, numOfProducts, i) << endl;
    }
}

void maxSales(product products[], int numOfProducts, int productNum, int weekNum)
{
    int max = products[productNum].sales[weekNum][0];
    int day = 1;
    for (int i = 0; i < 7; i++)
    {
        if (products[productNum].sales[weekNum][i] > max)
        {
            max = products[productNum].sales[weekNum][i];
            day = i + 1;
        }
    }
    cout << "The max sales was " << max << " on day " << day << endl;
}

float avgSales(product products[], int numOfProducts, int productNum)
{
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
            sum += products[productNum].sales[i][j];
    }
    return (float)(sum) / 28;
}

void printSales(int sales[][7], int saleamount)
{
    for (int i = 0; i < saleamount; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << sales[i][j] << " ";
        }
        cout << endl;
    }
}