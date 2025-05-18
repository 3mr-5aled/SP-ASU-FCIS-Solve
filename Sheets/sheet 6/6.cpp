#include <iostream>
using namespace std;

void checkIdentity();
void multipleMatrix();
void transpose();
void mirrorCheck();

int main()
{

    // Q1
    // checkIdentity();
    // Q2
    // multipleMatrix();
    // Q3
    // mirrorCheck();
    // Q4
    // transpose();

    return 0;
}

void checkIdentity()
{
    char esc = 'n';
    do
    {
        int matrix[10][10];
        bool isIdentity = true;
        int n, m;
        while (true)
        {
            cout << "Enter the number of rows and columns: ";
            cin >> n >> m;
            if (n == m && n <= 10 && m <= 10)
            {
                break;
            }
            else
            {
                cout << "Wrong dimensions" << endl;
            }
        }
        cout << "Enter the elements of the matrix: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j && matrix[i][j] != 1)
                {
                    isIdentity = false;
                    break;
                }
            }
        }
        if (isIdentity)
        {
            cout << "The matrix is an identity matrix." << endl;
        }
        else
        {
            cout << "The matrix is not an identity matrix." << endl;
        }

        cout << "Do you want to check if the matrix is an identity matrix? (y/n): ";
        cin >> esc;

    } while (esc != 'n' && esc != 'N');
}
void multipleMatrix()
{
    int matrix1[10][10];
    int matrix2[10][10];
    int n, m, o, p;
    while (true)
    {
        cout << "Enter dimensions of first matrix: ";
        cin >> n >> m;
        cout << "Enter dimensions of second matrix: ";
        cin >> o >> p;

        if (m == o)
        {
            break;
        }
        else
        {
            cout << "Wrong dimensions" << endl;
        }
    }
    cout << "Enter matrix 1:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter matrix 2:" << endl;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    int result[10][10] = {0}; // Initialize result matrix to 0

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
void mirrorCheck()
{
    int matrix1[10][10], matrix2[10][10];
    int n1, m1, n2, m2;
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> n1 >> m1;
    cout << "Enter the elements of matrix 1: " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> n2 >> m2;
    cout << "Enter the elements of matrix 2: " << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    if (n1 != n2 || m1 != m2)
    {
        cout << "The matrices have different dimensions and cannot be mirror images." << endl;
        return;
    }

    bool isMirror = true;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            if (matrix1[i][j] != matrix2[i][m1 - j - 1])
            {
                isMirror = false;
                break;
            }
        }
        if (!isMirror)
        {
            break;
        }
    }

    if (isMirror)
    {
        cout << "Matrix 1 is a mirror image of Matrix 2." << endl;
    }
    else
    {
        cout << "Matrix 1 is not a mirror image of Matrix 2." << endl;
    }
}
void transpose()
{
    int matrix[10][10];
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}