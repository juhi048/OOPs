#include<iostream>
using namespace std;
class Random{
    public:
    void func(){
        cout<<"This is a function with no operator"<<endl;
    }
    void func(int a){
        cout<<"This is a function with integer operator"<<endl;
    }
    void func(double a){
        cout<<"This is a function with double operator"<<endl;
    }
};

int main(){
    Random r;
    r.func();
    r.func(4);
    r.func(5.6);
    return 0;
}
