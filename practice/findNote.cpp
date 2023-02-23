#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    b=a/100;
    c=(a%100)/50;
    d=((a%100)%50)/20;
    e=(((a%100)%50)%20)/1;

    switch (a)
    {
    
    
    default:
       cout<<"requred 100 notes: "<<b<<endl;
       cout<<"requred 50 notes: "<<c<<endl;
       cout<<"requred 20 notes: "<<d<<endl;
       cout<<"requred 1 notes: "<<e<<endl;
    }
}