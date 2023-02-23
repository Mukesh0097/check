 #include<iostream>
 using namespace std;
   

class A{
    public:
    void fuc1(){
        cout<<"function 1"<<endl;
    }
    A(){
        cout<<"constructor called"<<endl;
    }

};

class B : public A{
    public:
    void fuc2(){
        cout<<"function 2"<<endl;
    }
};

class C : public A{
    public:
    void fuc3(){
        cout<<"function 3"<<endl;
    }
};

 int main(){

    A obj1;
    obj1.fuc1();

    B obj2;
    obj2.fuc1();
    obj2.fuc2();

    C obj3;
    obj3.fuc1();
    obj3.fuc3();




 }