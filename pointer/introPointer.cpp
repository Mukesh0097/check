#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<num<<endl;
    //address of operator -&
    cout<<"address of num is :"<<&num<<endl;


    int *ptr = &num;

    cout<<"value of ptr :"<<*ptr<<endl;

    cout<<"address of ptr :  "<<ptr<<endl;

   double ans = 4.77;

 
    double *p2 = &ans;
    cout<<"value of p2:"<<*p2<<endl;

    cout<<"address of p2 :  "<<p2<<endl;


    cout<<"size of  simple integer variable :"<<sizeof(num)<<endl;
    cout<<"size of  of ptr :"<<sizeof(ptr)<<endl;
    cout<<"size of  of p2:"<<sizeof(p2)<<endl;
    cout<<"size of  of *p2:"<<sizeof(*p2)<<endl; 




} 