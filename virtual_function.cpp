#include"bits/stdc++.h"
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"This is a base claas print function"<<endl;
    }
    void display(){
        cout<<"This is a base class display function"<<endl;
    }
};
class Derived: public Base{
    public:
    void print(){
        cout<<"This is a derived class print function"<<endl;
    }
    void display(){
        cout<<"This is a derived class display function"<<endl;
    }
};
int main(){
    Base *baseptr;
    Derived d;
    baseptr=&d;
    baseptr -> print();
    baseptr -> display();
 
return 0;
}
