#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << endl;
    int space;
    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= (5 - row); space++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
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
        cout << endl;
    }

    cout << endl;
    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= (5 - row); space++)
        {
            cout << "  ";
        }
        for (char ch = 'A'; ch <= 'A' + (row - 1); ch++)
        {
            cout << ch << " ";
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
        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
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
            cout << "*" << " ";
        }
        for (col = 1; col <= row - 1; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}