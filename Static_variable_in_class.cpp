#include <iostream>
using namespace std;


// public -- access 
// protected -- base class and drived class from that base class
// private  -- base class



class love
{
private:

    static int a; // decleration
    int b;

public:
    love()
    {
        a++;
    }
    void display(){
        // cout << a <<endl;
        cout << this <<endl;
        // cout << (int *)this->b << endl;
    }
};
int love::a = 0; //defination 

int main()
{

    love a , b , c ;
    a.display();
    b.display();
    c.display();
    // d.display();


    return 0;
}