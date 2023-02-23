#include<iostream>
using namespace std;

int  fibbonacci(int n){
    if(n==0 || n==1)
        return n;


    
   return fibbonacci(n-1)+fibbonacci(n-2);



   



    
    
}

int main(){
    int n;
    cin>>n;

    int ans = fibbonacci(n);
    cout<<ans;

   
    }
    
