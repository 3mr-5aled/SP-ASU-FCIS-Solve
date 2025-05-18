#include <iostream>

using namespace std;

// void concat(int *a, int *b, int *c, int n, int m);

struct Product
{
    int id;
    string name;
    float price;
    int quantity;
};

int main()
{

    // Question 1

    // int *a, *b, *c, n, m;

    // cout << "Enter the size of the first array: ";
    // cin >> n;
    // a = new int[n];
    // cout << "Enter the elements of the first array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // cout << "Enter the size of the second array: ";
    // cin >> m;
    // b = new int[m];
    // cout << "Enter the elements of the second array: ";
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> b[i];
    // }

    // c = new int[n + m];
    // concat(a, b, c, n, m);

    // cout << "Displaying the array c:" << endl;
    // for (int i = 0; i < (n + m); i++)
    // {
    //     cout << c[i] << " ";
    // }
    // cout << endl;

    // Question 2
    int n;
    cout << "How many Products do you want to enter? ";
    cin >> n;
    Product *products = new Product[n];
    cout << "Enter the details of the products:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Product #" << i + 1 << ":" << endl;
        cout << "Product ID: ";
        cin >> products[i].id;
        cout << "Product Name: ";
        cin >> products[i].name;
        cout << "Product Price: ";
        cin >> products[i].price;
        cout << "Product Quantity: ";
        cin >> products[i].quantity;
    }
    cout << "total price of all products: ";
    float totalPrice = 0;
    for (int i = 0; i < n; i++)
    {
        totalPrice += products[i].price * products[i].quantity;
    }
    cout << totalPrice << " L.E" << endl;

    return 0;
}

// void concat(int *a, int *b, int *c, int n, int m)
// {

//     for (int i = 0; i < n + m; i++)
//     {
//         if (i < n)
//         {
//             c[i] = a[i];
//         }
//         else
//         {
//             c[i] = b[i - n];
//         }
//     }
// }