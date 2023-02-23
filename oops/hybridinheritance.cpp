#include<iostream>
using namespace std;
//hybrid inheritance
class A{
    public:
    void fuc1(){

        cout<<"helloji "<<endl;

    }
};

class D{
    public:
    void fuc2(){
        cout<<"sarre kese ho !"<<endl;

    }

};
class B: public A{
    public:
    void fuc3(){
        cout<<"bade harami ho beta tum !"<<endl;
    }
};

class C : public A,public D{
    public:
    void fuc4(){
        cout<<"pyari samaj gyi !"<<endl;
    }
};


int main(){

    C check;
    check.fuc1();
    check.fuc2();
    check.fuc4();


}