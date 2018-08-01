#include <iostream>

using namespace std;

class Managers{
    public:
    string name, id, address, grade, position;

    Managers(){
            cout<<"Enter Name"<<endl;
            cin>>name;
            cout<<"Enter ID"<<endl;
            cin>>id;
            cout<<"Enter Address"<<endl;
            cin>>address;
            cout<<"Enter Grade"<<endl;
            cin>>grade;
            cout<<"Enter Position"<<endl;
            cin>>position;



    }

    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<address<<endl;
        cout<<grade<<endl;
        cout<<position<<endl;
    }
};

int main()
{
    int m;
    cout<<"How many managers do you want to record?"<<endl;
    cin>>m;

    Managers obj[m]; //creating array object

    for (int i = 0; i<m; i++){
        obj[m].display();
    }




    return 0;
}
