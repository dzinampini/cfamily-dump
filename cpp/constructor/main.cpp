#include <iostream>

using namespace std;
class Shape{
protected:
    double a,b;
public:
    Shape (){
        cout<<"enter a"<<endl;
        cin>>a;
        cout<<"enter b"<<endl;
        cin>>b;
 }
double calcArea(){
return(0.5*a*b);
}
};
int main()
{
    Shape x;
    cout<<"Area is"<<x.calcArea()<<endl;
    return 0;
}
