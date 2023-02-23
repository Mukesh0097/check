#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool powerOftwo(int n){
    int ans = 1;

    for (int  i = 0; i < 31; i++)
    {
      if(ans==n)
       return true;
       if(ans<(INT_MAX/2))
       ans=ans*2;




       

    }
    return false;
    
   
    
}

int main(){
    int n;
    cin>>n;

    cout<<powerOftwo(n);
}