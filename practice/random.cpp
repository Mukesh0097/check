#include<iostream>
using namespace std;

bool primeornot(int n){
    for (int i = 2; i < n; i++)
    {
       if (n%i==0)
       {
       
        return 1;
       }
       
    }
    return 0;
    
}

int main(){
    int n;
    cin>>n;
   

    if (primeornot(n))
    {
        cout<<"not prime number"<<endl;

    }else{
        cout<<"prime number"<<endl;
    }
    

    
}