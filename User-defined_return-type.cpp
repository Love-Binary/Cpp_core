#include <iostream>
#include <cstring>
using namespace std;

struct name
{
    string first;
    string last;
};

name DD(string str1,string str2)
{
    name temp;
    temp.first = str1;
    temp.last = str2 ;
    return temp;
    
}

int main(int argc, char const *argv[])
{
    name myname;
    myname = DD("Lovepreet","Singh");
    cout << myname.first << " " << myname.last;
    return 0;
}