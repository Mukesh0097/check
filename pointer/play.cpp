#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;

    //the above and below both way are same  result

    int *p = 0;
    p = &i ;//never write like : *p=&i when you initialize first like *p = 0
    cout<<p<<endl;
    cout<<*p<<endl;



    int num  = 5;
    int a = num;
    cout<<" num before "<<num<<endl;
    a++;
    cout<<" num after "<<num<<endl;



    int *k = &num;
    cout<<" num before  "<<num<<endl;
    (*k)++;
    (*k) *=9;
    
    cout<<" num after "<<num<<endl;

    //copying the pointer

    int *l = k;
    cout<<l<<"-"<<k<<endl;//both address same
    cout<<*l<<"-"<<*k<<endl;//both value same

    //important concept


    int j = 9;

    int *t = &j;
    *t = *t * 8;//when you use shortcut u need()to update pointer but if u dont use shortcut you no need () to update pointer
    cout<<*t<<endl;

    cout<<"before t "<<t<<endl;
    t = t + 1;
    cout<<"after t "<<t<<endl;
    cout<<j<<endl;


    int m[] = {1, 2, 3, 4};
cout << *(m) << " " << *(m+1);





}