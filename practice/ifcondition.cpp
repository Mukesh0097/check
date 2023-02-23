#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cout<<"enter current time:";
    cin>>t;
    if(t<12)
    {
        cout<<"it is afternoon\n";
    } else if (t<20)
    {
        cout<<"it is evening!!\n";
    } else
    {
        cout<<"it is morning\n";
    }
    
    
    int a=20;
    string b=(a<18)?"good day":"good night";
    cout<<b;
    return 0;
}