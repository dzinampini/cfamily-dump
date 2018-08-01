/*1. Create a class called shape which contains elements length and width. Include a
non-parameterised  constructor to initialise the members and a method to compute the area of a
 rectangle.
Given that perimeter class is a friend class to shape, demonstrate how you can compute the
perimeter of rectangle and display it together with the area from shape class.
*/

#include <iostream>

using namespace std;


class Shape{
    public:
    double length, width;

    Shape (){
        cout<<"Enter Length"<<endl;
        cin>>length;
        cout<<"Enter Width"<<endl;
        cin>>width;
    }

    double area(){
        return length*width;
    }

    friend class Perimeter;
};

class Perimeter{
    Shape l,w;

    public:
    Perimeter(double l1, double w1){
        l.length = l1;
        w.width = w1;
    }

    double perimeter (){
        return 2*l1 + 2*w1;
    }

    void display(){
        cout<<"Value of Perimeter \t"<<perimeter();
    }
};
int main()
{
    Perimeter p;
    p.Shape();
    p.perimeter();
    p.display();
    return 0;
}
