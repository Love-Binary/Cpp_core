#include <iostream>
using namespace std;

// struct  c
// data members
// c++ struct
// data members
// // member functions

struct C
{
    private: // access specifier
    int x; // data member
    int y; // data member

    // member function
    void display()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};
class B
{
    public:
    int a;
    int b;
    void display()
    {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main()
{
    B objB;
    objB.a = 10;
    objB.b = 20;
    objB.display();
    return 0;
}