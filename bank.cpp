#include<iostream>
using namespace std;
class bank{
    double balance;
    string name;
    public:
    bank(string n,double b){
        name=n;
        if(b>=0){
            balance=b;
        }
        else{
            balance=0;
        }
    }
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"deposited :$"<<amount<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"withdrawn:$"<<amount<<endl;
        }
        else{
            cout<<"invalid amount or insufficient balance"<<endl;
        }
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"balance:$"<<balance<<endl;
    }
};
int main(){
    bank b("rohit",1000);
    double d; 
b.display();  
    cout<<"enter deposite amount\n";
    cin>>d;
    b.deposit(d);
    b.display();
    cout<<"enter withdraw amount\n";
    cin>>d;
    b.withdraw(d);
    b.display();
    return 0;
}