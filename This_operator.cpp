#include <iostream>
using namespace std;

// MyClass s1 s2 


class MyClass {
public:
    // data-member
    int a;
    int value;
    int c;
    

   // member functions
    int  display(){
        cout << "MMDDLLMMRRSS" << endl;
        value = 45;
        cout << this << " " << &a;
        // *(int *)this = 95;
        // this -> value = 48;
        // cout << a <<" " << value <<endl;
        return *(int *)this ;
    }
    
};

int main() {
    MyClass obb;
    obb.value = 45;
    
    int a = obb.display() ;
    // cout << a <<endl;

    return 0;
}