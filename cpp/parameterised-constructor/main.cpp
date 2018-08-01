#include <iostream>

using namespace std;
class Bill{
protected:
    double units,rate;
    static double fixed_charge;
    public:
        Bill (double r,double u){
            rate=r;
            units=u;
     }
    double calc(){
    return(fixed_charge+(units*rate));
    }
};

double Bill::fixed_charge=5.00;

int main()
{
    Bill b(200,200);
    cout<<"the bill is $"<<b.calc()<<endl;
    return 0;
}
