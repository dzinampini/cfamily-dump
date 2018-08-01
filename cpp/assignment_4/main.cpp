#include <iostream>
#include <string>

using namespace std;

class Account {
    public:
    string company_name, address;
    int account_number;

    Account(string cn, string ad, int ac){
        company_name = cn;
        address = ad;
        account_number = ac;
    };
};

class Balance: public Account{
    private:
    double amount_paid, amount_owing;

    public:
    Balance(string cn, string ad, int ac, double ap, double ao): Account (cn, ad, ac){
        amount_paid = ap;
        amount_owing = ao;
    }

    double calculate_balance(){
        return amount_owing-amount_paid;
    }

};


int main()
{
    Balance acc("Coders Inc", "25 Mpini Crescent, Silicon Valley, Carlifonia, USA", 564748484, 12.5, 25.0);
    cout<<acc.calculate_balance()<<endl;
    return 0;
}
