#include <iostream>
using namespace std;

class Base1
{
   public:
   void fun()
   {
    cout << "Base1 is fun" << endl;
   }
};

class Base2
{
    public:
    void fun()
    {
     cout << "Base2 is fun";
    }

};
class B: public  Base1 , public Base2
{
   int x;
};

int lo = 45;

int main()
{
    B obb;
    obb.Base1::fun();
    obb.Base2::fun();

    return 0;
}