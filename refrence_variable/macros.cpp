#include<iostream>
using namespace std;

#define min(a,b) (((a)<(b))?a:b)//function like macros

int main(){

    int a , b;
    cin>>a>>b;

    cout<<"minimum value "<<min(a,b);



}