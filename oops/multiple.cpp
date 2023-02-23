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

class house{

    public:
    void bark(){
        cout<<"bow bow!!"<<endl;
    }
    
};

class hybrid  : public Animal,public house{

};

int main(){

    hybrid check;
    check.speak();
    check.bark();
    

}