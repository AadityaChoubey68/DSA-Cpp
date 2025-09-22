#include <iostream>
using namespace std;

class shape
{
public:
    int radius;
    int diameter;
    char symbol;
    char sys;
};

int main()
{
    shape circle;
    circle.radius = 2;              // 4 bytes
    circle.diameter = 4;            // 4 bytes
    circle.symbol = 'T';            // 1 byte + Compiler adds 3 bytes padding after char = 4 bytes
    cout << sizeof(circle) << endl; // Total =  12 bytes

    shape *circle2 = new shape; // Dynamic Memory allocation of object
    (*circle2).radius = 22;
    (*circle2).diameter = 44;
    cout << (*circle2).radius<<endl;
    cout << circle2->diameter;
}