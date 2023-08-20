#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;

    student (){
        cout<<"Default Constructor"<<endl;
    } // Default Constructor

    student(string s, int a, bool g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age=a;
        gender=g;
    } // Parameterised Constructor

    student (student &a){
        cout<<"Copy Constructor"<<endl;
        name =a.name;
        age=a.age;
        gender=a.gender;
    } // Copy Constructor

    //Operator Overloading
    bool operator == (student &a){
        if (name == a.name , age ==a.age , gender == a.gender){
            return true;
        }
        else{
            return false;
        }
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void setname(string s){
        name = s;
    }

    void getname(string s){
        cout<<name<<endl;
    }

    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl; 
    }
};

int main(){
    student a("JUHI",20,1);
    a.print();
    student b;
    student c = a;
    a.print();
    if(b==c){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

return 0;
}
