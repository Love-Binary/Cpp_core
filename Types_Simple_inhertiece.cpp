#include <iostream>
using namespace std;

class A
{
    private: // acces in only thier class 
    int a ;
    protected:  // base class and derived class
    int b;
    void display()
    {
        cout << "LOVE";
    }
    public:     // any function 
    int c ;
    void hello();
};

void A::hello()
{
    cout << "HEllo";
}
// simple inhertience 
    // public -- protected and public members remain protected and public in derived class
    // protected -- proteted and public members of base class become protected in derived class
    // privete --  all members become private in derived class
class B: protected  A
{
    public:
    B(){
        // a = 34 --  privete in base class
        b = 45;
        cout << b ;
    }
};

int lo = 45;

int main()
{
    // B b;
    // b.display();
    // b.c = 45;
    // cout << endl << b.c ;
    A a;
    // a.hello();

    int lo = 48;
    cout<< endl << lo << endl;
    cout << ::lo << endl;

    return 0;
}