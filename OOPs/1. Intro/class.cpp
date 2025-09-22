#include <iostream>
using namespace std;

// Init public class
class student // --> class
{
public: // --> access modifier (By default private:)
    string name;
    int age;
    string grade;
};

// Init private class
class car
{
private: // --> access modifier (By default private:)
    string brand;
    string model;
    int year;

public:                     // --> access modifier (By default private:)
    void setBrand(string b) // Function Setter
    {
        brand = b;
    }
    void setModel(string m) // Function  Setter
    {
        model = m;
    }
    void setYear(int y) // Function  Setter
    {
        year = y;
    }

    void getBrand() // Function Getter
    {
        cout << brand << endl;
    }
    void getModel() // Function Getter
    {
        cout << model << endl;
    }
    void getYear() // Function Getter
    {
        cout << year << endl;
    }
};

int main()
{
    student s1; //--> object
    s1.name = "Aaditya";
    s1.age = 21;
    s1.grade = "A++";

    cout << s1.name << endl;

    car c1;
    c1.setBrand("Maruti");
    c1.setModel("Baleno");
    c1.setYear(2017);

    c1.getBrand();
    c1.getModel();
    c1.getYear();
}