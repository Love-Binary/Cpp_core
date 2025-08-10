#include <iostream>
using namespace std;

int main() {
    int *i = new int;
    float *s = new float;
    char *c = new char;
    int *k = new int[40];  // 39
    char *l = new char[10];
    *l = 'l';
    *(l+1) = 'b';
    cout << l;

    *i = 456;

    delete []k;
    delete k;
    // cout << i << endl ;
    
    // *k = 4;
    // *(k+1) = 5;
    // cout << *k << " " << *(k+1) << endl;
    // cout << (int )k << " " << (int )(k+1) << endl;

    delete i;
    




    return 0;
}