#include<iostream>
using namespace std;
class Student {
    string name;
    public:
    int age;
    bool gender;

    void setname(string s){
        name = s;
    }

    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender"<<gender<<endl;
    }
};

int main(){
    Student arr[3];
    string s;
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>s;
        arr[i].setname(s);
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].print();
    }
 
return 0;
}