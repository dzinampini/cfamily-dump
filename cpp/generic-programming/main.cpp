#include <iostream>
using namespace std;



template <class T, class Z>
T tenaryop(T a, Z b){
    return (a>b)?a:b;
}

int main()
{
    cout<<"Double and Int: "<<tenaryop(3.45, 5)<<endl;
    cout<<"Double and Float: "<<tenaryop(2.65f, 7.2)<<endl;

    return 0;
}
