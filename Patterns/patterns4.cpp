#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int space;
    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= 5 - row; space++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= (5 - row); space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        for (col = row - 1; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= row - 1; space++)
        {
            cout << "  ";
        }
        for (col = 5; col > row - 1; col--)
        {
            cout << "* ";
        }
        for (col = 4; col > row - 1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    int n = 10;
    for (row = n; row >= 1; row--)
    {
        for (space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        for (space = 1; space <= 2 * (n - row); space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        for (space = 1; space <= 2 * (n - row); space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        for (space = 1; space <= 2 * (n - row); space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        for (space = 1; space <= 2 * (n - row); space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
