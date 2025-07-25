#include <iostream>
using namespace std;

class A 
{
    public:
    virtual void greet()
    {
        cout << "Hello Sir i am in class A\n";
    }
};

class B : public A
{
    public:
    void greet()
    {
        cout << "Hello Sir i am in class B\n";
    }
};

int main() {
    A obb;
    A *pp = &obb;
    pp->greet();
    
    
    B o ;
    A *p = &o;
    p->greet();


    return 0;
}