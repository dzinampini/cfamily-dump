#include <iostream>

using namespace std;

class A {
    public:
    int x;


};

class B : public A{
    private:
    int y;



};

class C : public B{
    private:
    int z;

};

int main(){
    C ob;
    C ob2;
    C ob3;
    ob.display();
    ob2.display2();
    ob3.display3();
    return 0;
}
