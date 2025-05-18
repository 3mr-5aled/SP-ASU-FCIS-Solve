#include <iostream>
using namespace std;

void transpose();      // Function prototype
void multipiication(); // Function prototype

int main()
{

    // transpose();

    multipiication();

    return 0;
}

void transpose()
{
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;
    int arr[10][10];
    int transpose[10][10];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Transpose the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << endl;

    cout << "The transposed array is:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

void multipiication()
{
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> row1 >> col1;
    int arr1[10][10];
    cout << "Enter the elements of first matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> row2 >> col2;
    if (col1 != row2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return;
    }
    int arr2[10][10];
    cout << "Enter the elements of second matrix:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;
    int result[10][10] = {0}; // Initialize result matrix to 0
    // Multiply the matrices
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "The result of matrix multiplication is:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}