#include <iostream>
using namespace std;


class A
{
private:
    int i;
public:
    A(){
        i = 45;
    }
};

int main() {
    A *a = new A();
    
    cout << (*(int *)a);
    return 0;
}