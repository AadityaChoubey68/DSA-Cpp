#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("zoom.txt");
    fout << "Hellow Aaditya N Choubey";
    fout.close();
}