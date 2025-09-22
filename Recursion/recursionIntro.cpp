#include <iostream>
using namespace std;

void wishBirthday(int n)
{
    if (n == 0)
    {
        cout << "Happy Bithday aaditya";
        return;
    }
    cout << n << " days left for your birthday aadityaaaa" << endl;
    wishBirthday(n - 1);
}

void print1toN(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n % 2 != 0)
    {
        n = n - 1;
    }
    print1toN(n - 2);
    cout << n << endl;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int sum1ton(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum1ton(n - 1);
}

int powerOfTwo(int n)
{
    if (n == 1)
    {
        return 2;
    }
    return 2 * powerOfTwo(n - 1);
}

int sumOfSquare(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n * n) + sumOfSquare(n - 1);
}

int fibonacciNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacciNumber(n - 2) + fibonacciNumber(n - 1);
}

int main()
{
    int fact = fibonacciNumber(8);
    cout << fact;
}