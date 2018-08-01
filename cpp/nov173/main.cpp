#include <iostream>

using namespace std;

class Invoice {
    public:
    string part_no, part_descr;
    int quantity;
    double price;

    Invoice(string pn, string pd, int q, double p){
        part_no =pn;
        part_descr = pd;
        quantity = q;
        price = p;

    }

    //setters
    void setpart_no(string part_no){
        this->part_no=part_no;
    }

    void setpart_descr(string part_descr){
        this->part_descr=part_descr;
    }

    void setquantity(int quantity){
        this->quantity=quantity;
    }

    void setprice(double price){
        this->price=price;
    }

    //getters
    string getpart_no(){
        return part_no;
    }

    string getpart_descr(){
        return part_descr;
    }

    int getquantity(){
        return quantity;
    }

    double getprice(){
        return price;
    }

    double getInvoiceAmount(){
        if(quantity < 0){
            quantity = 0;
        }

        if(price < 0){
            price = 0;
        }

        return quantity*price;
    }



};

int main()
{

    Invoice s("hdhdhd8", "gsggss ghsgsgs gsgs",56,1.0);
    //display
    cout<<"Part No: "<<s.getpart_no()<<endl;
    cout<<"Part Desc: "<<s.getpart_descr()<<endl;
    cout<<"Quantity: "<<s.getquantity()<<endl;
    cout<<"Price: "<<s.getprice()<<endl;
    cout<<"Total Value"<<s.getInvoiceAmount()<<endl;

    return 0;
}
