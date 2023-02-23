#include<iostream>
using namespace std;
//operator overloading

class adding{
    public:
    int a;
    int b;
    public:
    void operator+( adding&obj){
        int value = this->a;
        int value2 = obj.a;
        cout<<"output:"<<value2-value<<endl;
    }
    // void operator+(adding& obj){
    //     cout<<"mukesh"<<endl;
    // }
    // void operator() (){
    //     cout<<"me bracket hu "<<this->b<<endl;
    // }

};

int main(){

    adding obj1,obj2;
   obj2.a = 9;
   obj1.a = 10;

   obj1+obj2;
   //obj1();

}