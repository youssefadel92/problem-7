#include <iostream>
#include<iomanip>

using namespace std;
class Bankapplications
{
public:


};
class bankaccount{
private:
    string id ;
    float balance;
    string name ;
    string address;
    string type ;
public:
        bankaccount(string id1 , float balance1,string name1,string address1,string type1){
        id=id1;
        balance=balance1;
        name=name1;
        address=address1;
        type=type1
;    }
    bankaccount(){
    }
    void  createaccount(){
        cout<<"enter id "<<endl;
        cin>>id;
        cout<<"name"<<endl;
        cin>>name;
        cout<<"enter adress"<<endl;
        cin>>address;
        cout<<"enter type"<<endl;
        cin>>type;
        cout<<"enter balance"<<endl;
        cin>>balance;
        cout<<"account created with"<<id<<" "<<name<<endl;



    }
    void showaccount(){
        cout<<"id :"<<id<<endl;
        cout<<" name:"<<name<<endl;
        cout<<"adress :"<<address<<endl;
        cout<<"type : "<<type<<endl;
        cout<<"balance : "<<balance<<endl;

    }
    void withdraw(){

    }




};

int main()
{
    string id;
    float balance;
    string name;
    string adress;
    string type ;
    bankaccount bank1(id,balance,name,adress,type);
    bankaccount bank2(id,balance,name,adress,type);
    bank1.createaccount();
    bank1.showaccount();
    bank2.createaccount();



}
