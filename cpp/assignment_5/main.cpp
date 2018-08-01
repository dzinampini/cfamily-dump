#include <iostream>

using namespace std;

class SchemeBook{
    public:
    string grade, topic, objectives, source, activity, evaluation;

    void get_topic_and_details(){
        cout<<"Enter Topic"<<endl;
        getline(cin,topic);
        cout<<"Enter objectives"<<endl;
        getline(cin,objectives);
        cout<<"Enter Sources"<<endl;
        getline(cin,source);
        cout<<"Enter Activities"<<endl;
        getline(cin,activity);
        cout<<"Enter Evaluation"<<endl;
        getline(cin,evaluation);
    }

    string display(){
        cout<<"Topic: "<<topic<<endl;
        cout<<"Objectives"<<endl<<objectives<<endl;
        cout<<"Sources"<<endl<<source<<endl;
        cout<<"Activities"<<endl<<activity<<endl;
        cout<<"Evaluation"<<endl<<evaluation<<endl;
    }



};

class shona: public SchemeBook{
    public:

    void subject_name(){
        cout<<"Shona Subject"<<endl;
    }
};

class english: public SchemeBook{
    public:

    void subject_name(){
        cout<<"Engilsh Subject"<<endl;
    }
};

int main()
{
    shona sh;
    int n;
    cout<<"Enter the number of topics for the shona subject";
    cin>>n;

    for(int i=0; i<=n; i++){
        sh.get_topic_and_details();
    }


    return 0;
}
