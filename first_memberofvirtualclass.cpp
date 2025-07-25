#include <iostream>
using namespace std;

class A {
private:
    int i;

public:
    A() { i = 45; }

    virtual void love() {
        cout << "THIS IS LOVE FUNCTION IN CLASS A." << endl;
    }
};

int main() {
    A* a = new A();

    // Step 1: Get vtable pointer from the object
    void** vptr = *(void***)a;

    // Step 2: Print the first entry of vtable (love function)
    cout << "Virtual function from vtable: " <<(int) vptr[0] << endl;

    // Step 3: Get member function pointer
    void (A::*ptr)() = &A::love;

    // Step 4: Cast member function pointer to void* (compiler-specific and risky)
    // Many compilers support this, but technically it's not portable.
    void* rawFuncPtr = *(void**)&ptr;

    cout << "Address from &A::love pointer: " << (int)rawFuncPtr << endl;

    // Step 5: Display value of private member 'i'
    cout << "Value of 'i' from object: " << *((int*)a) << endl;

    return 0;
}