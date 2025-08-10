#include <iostream>
using namespace std;

// 1. Single Inheritance
class Parent {
public:
    void showParent() {
        cout << "Single Inheritance: Parent class function\n";
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Single Inheritance: Child class function\n";
    }
};

// 2. Multiple Inheritance
class Base1 {
public:
    void showBase1() {
        cout << "Multiple Inheritance: Base1 class\n";
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "Multiple Inheritance: Base2 class\n";
    }
};

class Derived : public Base1, public Base2 {
public:
    void showDerived() {
        cout << "Multiple Inheritance: Derived class\n";
    }
};

// 3. Hierarchical Inheritance
class Common {
public:
    void showCommon() {
        cout << "Hierarchical Inheritance: Common class\n";
    }
};

class ChildA : public Common {
public:
    void showChildA() {
        cout << "Hierarchical Inheritance: ChildA class\n";
    }
};

class ChildB : public Common {
public:
    void showChildB() {
        cout << "Hierarchical Inheritance: ChildB class\n";
    }
};

// 4. Multilevel Inheritance
class Grandparent {
public:
    void showGrandparent() {
        cout << "Multilevel Inheritance: Grandparent class\n";
    }
};

class Parent2 : public Grandparent {
public:
    void showParent2() {
        cout << "Multilevel Inheritance: Parent class\n";
    }
};

class Child2 : public Parent2 {
public:
    void showChild2() {
        cout << "Multilevel Inheritance: Child class\n";
    }
};

int main() {
    // Single
    Child c;
    c.showParent();
    c.showChild();

    // Multiple
    Derived d;
    d.showBase1();
    d.showBase2();
    d.showDerived();

    // Hierarchical
    ChildA ca;
    ca.showCommon();
    ca.showChildA();

    ChildB cb;
    cb.showCommon();
    cb.showChildB();

    // Multilevel
    Child2 c2;
    c2.showGrandparent();
    c2.showParent2();
    c2.showChild2();

    return 0;
}