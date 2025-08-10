<<<<<<< HEAD
#include <iostream>
using namespace std;

class MyClass {
public:
    void show() {
        cout << "Function called." << endl;
    }
};

int main() {
    MyClass obj1, obj2;

    // Pointers to member functions
    void (MyClass::*funcPtr1)() = &MyClass::show;
    void (MyClass::*funcPtr2)() = &MyClass::show;

    cout << "Address of show() from obj1: " << (void*&)funcPtr1 << endl;
    cout << "Address of show() from obj2: " << (void*&)funcPtr2 << endl;

    // Just to show both objects can use the function
    (obj1.*funcPtr1)();
    (obj2.*funcPtr2)();

    return 0;
=======
#include <iostream>
using namespace std;

class MyClass {
public:
    void show() {
        cout << "Function called." << endl;
    }
};

int main() {
    MyClass obj1, obj2;

    // Pointers to member functions
    void (MyClass::*funcPtr1)() = &MyClass::show;
    void (MyClass::*funcPtr2)() = &MyClass::show;

    cout << "Address of show() from obj1: " << (void*&)funcPtr1 << endl;
    cout << "Address of show() from obj2: " << (void*&)funcPtr2 << endl;

    // Just to show both objects can use the function
    (obj1.*funcPtr1)();
    (obj2.*funcPtr2)();

    return 0;
>>>>>>> 4277b0af1ed968f606300056fbd5132bc92706e0
}