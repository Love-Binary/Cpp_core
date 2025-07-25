#include <iostream>
using namespace std;

class Demo {
public:
    void funcA() { cout << "Function A" << endl; }
    void funcB() { cout << "Function B" << endl; }
    void funcC() { cout << "Function C" << endl; }
};

int main() {
    // Create pointers to each member function
    void (Demo::*ptrA)() = &Demo::funcA;
    void (Demo::*ptrB)() = &Demo::funcB;
    void (Demo::*ptrC)() = &Demo::funcC;

    // Cast pointers to void* for printing addresses
    cout << "Address of funcA: " << (int)(void*&)(ptrA) << endl;
    cout << "Address of funcB: " << (int)(void*&)(ptrB) << endl;
    cout << "Address of funcC: " << (int)(void*&)(ptrC) << endl;

    return 0;
}