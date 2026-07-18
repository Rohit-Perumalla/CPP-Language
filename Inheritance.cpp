//hierarchical inheritance
#include<iostream>
using namespace std;
class employe{
    public:
    void work(){
        cout<<"I am working"<<endl;
    }
};
class manager: public employe{
    public:
    void managing(){
        cout<<"I am managing"<<endl;
    }
};
class developer: public employe{
    public:
    void devoloping(){
        cout<<"I am developing"<<endl;
    }
};
int main(){
    employe e;
    manager m;
    developer d;
    m.work();
    m.managing(); // This will not work as 'managing' is not a member of 'employe'
    d.work();
    d.devoloping(); // This will not work as 'devoloping' is not a member of 'employe'
    
    return 0;
}