<<<<<<< HEAD
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
=======
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
>>>>>>> 4277b0af1ed968f606300056fbd5132bc92706e0
}