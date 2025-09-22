#include <iostream>
using namespace std;

int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        char ch = 'a' + (row - 1);
        for (col = 1; col <= row; col++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - (row - 1); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col >= 5 - (row - 1); col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }

}
