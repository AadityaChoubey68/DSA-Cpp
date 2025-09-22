#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;

    int row1, col1;
    for (row1 = 1; row1 <= 5; row1++)     // 1 1 1 1 1
    {                                     // 2 2 2 2 2
        for (col1 = 1; col1 <= 5; col1++) // 3 3 3 3 3
        {                                 // 4 4 4 4 4
            cout << row1 << " ";          // 5 5 5 5 5
        }
        cout << endl;
    }

    cout << endl;

    int row2, col2;
    for (row2 = 1; row2 <= 5; row2++)     // 1 2 3 4 5
    {                                     // 1 2 3 4 5
        for (col2 = 1; col2 <= 5; col2++) // 1 2 3 4 5
        {                                 // 1 2 3 4 5
            cout << col2 << " ";          // 1 2 3 4 5
        }
        cout << endl;
    }

    cout << endl;

    for (row2 = 1; row2 <= 5; row2++)     // 5 4 3 2 1
    {                                     // 5 4 3 2 1
        for (col2 = 5; col2 >= 1; col2--) // 5 4 3 2 1
        {                                 // 5 4 3 2 1
            cout << col2 << " ";          // 5 4 3 2 1
        }
        cout << endl;
    }

    cout << endl;

    for (row2 = 1; row2 <= 5; row2++)     // 1 4 9 16 25
    {                                     // 1 4 9 16 25
        for (col2 = 1; col2 <= 5; col2++) // 1 4 9 16 25
        {                                 // 1 4 9 16 25
            cout << col2 * col2 << " ";   // 1 4 9 16 25
        }
        cout << endl;
    }

    cout << endl;

    for (row = 1; row <= 5; row++)          // 1 8 27 64 125
    {                                       // 1 8 27 64 125
        for (col = 1; col <= 5; col++)      // 1 8 27 64 125
        {                                   // 1 8 27 64 125
            cout << col * col * col << " "; // 1 8 27 64 125
        }
        cout << endl;
    }

    cout << endl;
    for (row = 1; row <= 5; row++)
    {
        char name = 'a' + (row - 1);
        for (col = 1; col <= 5; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (row = 1; row <= 5; row++)
    {
        for (char col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;
    int count = 0;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
};