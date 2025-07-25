#include <iostream>
using namespace std;

class A
{
    public:
    int a;
    void show() { cout << "Base::show()" << endl; }
};

class Base
{
    public:
    int i;
    virtual void show() { cout << "Base::show()" << endl; }
};

class Derived : public Base
{
    public:
    void show() override { cout << "Derived::show()" << endl; }
};

int main()
{
    // Base *b = new Base();
    // Base *d = new Derived();

    // // Call show to trigger dynamic dispatch
    // b->show(); // Calls Base::show()
    // d->show(); // Calls Derived::show()

    // delete b;
    // delete d;
    cout  << sizeof(A) << endl;
    cout << sizeof(Base) << endl;

    return 0;
}