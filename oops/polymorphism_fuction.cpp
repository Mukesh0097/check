#include<iostream>
using namespace std;
//fuction overloading fuction k type se jyada argument pr jayada depend krta he


class polymorphism{
    public:
    // default arguments can be called with  2 or 3 or 4
    int add(int x,int y ,int z = 0,int w = 0){
        return (x+y+z+w);
    }



    //function overloading with different type of argument
    // void sayhello(int n){
    //     cout<<"haaji !"<<endl;
    // }
    // void sayhello(string name){
    //     cout<<"kya kre bhai"<<endl;
    // }
    
    
    //diffrent numbr of argument
    // void sayhello(int n,int m){
    //     cout<<"sayHello"<<endl;
    // }
    // void sayhello(int l ,int k,int j){
    //     cout<<"kaa ho "<<endl;
    // }
};

int main(){

    polymorphism obj;
   cout<<obj.add(15,16)<<endl;
   cout<<obj.add(15,16,85)<<endl;
   cout<<obj.add(15,16,85,63)<<endl;
    







    //  //function overloading with different type of argument
    //  polymorphism obj;
    //  obj.sayhello(5);
    //  string name = "kajal";
    //  obj.sayhello(name);



    // polymorphism obj;
    // obj.sayhello(4,5);
    // obj.sayhello(4,5,7);//fuction overloading with different number of arguments

}