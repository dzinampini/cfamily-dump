#include <iostream>

using namespace std;

template <class Chatikobo>
class One {
    private:
    Chatikobo x;

    public:
    void setX(Chatikobo x){
        this->x = x;
    }

    Chatikobo getX(){
        return x;
    }
};



int main()
{
    One <int>ob1;
    One <string>ob2;

    ob1.setX(5);
    ob2.setX("precious");

    cout<<ob1.getX()<<endl;
    cout<<ob2.getX()<<endl;

    return 0;
}
