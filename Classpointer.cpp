<<<<<<< HEAD
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
=======
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
>>>>>>> 4277b0af1ed968f606300056fbd5132bc92706e0
}