#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(){
        cout << "i am in Myclass\n";
    } 
    MyClass(int a , int b){
        cout << a + b << endl;
    }
    void display(){
        cout << "MMDDLLMMRRSS" << endl;
    }
    ~MyClass()
    {
        cout << "LOVEPREET" << endl;
    }
};

int main() {
    MyClass obb;
    obb.display();
    return 0;
}