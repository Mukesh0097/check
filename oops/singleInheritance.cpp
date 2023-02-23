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
    
};
int main(){

    house object;
    object.speak();
    cout<<object.age<<endl;

}