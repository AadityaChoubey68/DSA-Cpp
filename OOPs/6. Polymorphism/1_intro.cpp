#include <iostream>
using namespace std;

class shape
{
public:
    int calculateArea(int r) // <-- Function Overloading (same name but different parameters)
    {
        return 3.14 * r * r;
    }
    int calculateArea(int l, int b) // <-- Function Overloading (same name but different parameters)
    {
        return l * b;
    }
};

class Complex
{
    int real, img;

public:
    Complex()
    {
    }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
    Complex operator+(Complex &C)
    {
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }
};

int main()
{
    shape circle, rectangle;
    cout << circle.calculateArea(5) << endl;
    cout << rectangle.calculateArea(3, 4) << endl;

    Complex c1(3, 4);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;
    c3.display();
}