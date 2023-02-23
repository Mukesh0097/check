#include<iostream>
using namespace std;

int modularExponation(int x,int n,int m){
    int result = 1;
    while (n>0)
    {
        if(n&1)
        {
             result = (1LL*result * (x)%m)%m;

        }
       
        x = (1LL*(x)%m * (x)%m)%m;
        n = n>>1;

    }
    return result;
    
    
}

int main(){
    int x,n,m;
    cout<<"enter the base value: ";
    cin>>x;
    cout<<"enter the power of base: ";
    cin>>n;
    cin>>m;


    cout<<"mode of exponation: "<<modularExponation(x,n,m);
}