<<<<<<< HEAD
#include <iostream>
using namespace std;

class base{
    //*vtr = base address of vtable of base class ;
    public:
    // virtual void greet() = 0; // pure virtual function  so we can't make object of base class
    virtual void display()
    {
        cout << "In Base Class\n";
    }
    virtual void show()
    {
        cout << "In Base Class\n";
    }
};
// vtable(base) = {&display , &show};
class Derived : public base{
    //*vtr;
    public:
    void greet() {
        cout << "HELLO \n";
    };
    void display()
    {
        cout << "In Derived Class\n";
    }
};
// vtable(Derived ) = {&display , &show(base class)};
// because there is not show() function in base class


int main() {
    // cout  << sizeof(base) << endl;
    // cout << sizeof(Derived) << endl;
    base b;
    base *p = &b;
    // p = address of vtable of base class ;
    // p->display(); point to base class function display
    p->display();
    p->show();
    
    Derived d;
    p = &d;
    // p = address of vtable of derived class ;
    // p->display(); point to derived class function display
    p->display();
    p->show();

    return 0;
=======
#include <iostream>
using namespace std;

class base{
    //*vtr = base address of vtable of base class ;
    public:
    // virtual void greet() = 0; // pure virtual function  so we can't make object of base class
    virtual void display()
    {
        cout << "In Base Class\n";
    }
    virtual void show()
    {
        cout << "In Base Class\n";
    }
};
// vtable(base) = {&display , &show};
class Derived : public base{
    //*vtr;
    public:
    void greet() {
        cout << "HELLO \n";
    };
    void display()
    {
        cout << "In Derived Class\n";
    }
};
// vtable(Derived ) = {&display , &show(base class)};
// because there is not show() function in base class


int main() {
    // cout  << sizeof(base) << endl;
    // cout << sizeof(Derived) << endl;
    base b;
    base *p = &b;
    // p = address of vtable of base class ;
    // p->display(); point to base class function display
    p->display();
    p->show();
    
    Derived d;
    p = &d;
    // p = address of vtable of derived class ;
    // p->display(); point to derived class function display
    p->display();
    p->show();

    return 0;
>>>>>>> 4277b0af1ed968f606300056fbd5132bc92706e0
}