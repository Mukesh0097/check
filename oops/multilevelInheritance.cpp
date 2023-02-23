#include<iostream>
using namespace std;
//multilevel inheritance

class Animal {
    public:
    int age;
    string marital_status;

    public:
    void balbacche(){
        cout<<"haa bhai he !!"<<endl;
    }
};

class Dog : public Animal{

};

class GermanDog : public Dog{

};

int main(){

    GermanDog object1;

    object1.balbacche();

}