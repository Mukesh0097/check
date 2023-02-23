#include<iostream>
using namespace std;

int main(){
    int n;
    cin  >> n;

    bool isPrime=0;

    for (int  i = 2; i < n; i++)
    {
        if (n%i==0)
        {
           isPrime=1;
           break;
        }
        
    }
    if (isPrime == 1)
    {
        cout<<" not prime number";

    }else{
        cout<<" prime number";
    }

    
    
}