#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;


    for (int  i = 2; i <= n; i++)
    {
       fact=(fact*i);

    }
   
    return fact;

}

int combination(int s,int r){

   return factorial(s)/((factorial(r))*(factorial(s-r)));
    
    
    
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

   
     

cout<<combination(a,b)<<endl;
}