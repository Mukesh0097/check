#include<iostream>
using namespace std;

class Animal {
     public:
     int age;
     int weight;

     public:
     void speak(){
        cout<<"speaking bhaiya!! "<<endl;
     }
};

class house:public Animal{
    public:
    void speak(){
        cout<<"barkinh bahiya"<<endl;
    }
    
};

int main(){

    house obj;
    obj.speak();
    

}