#include<iostream>
using namespace std;

int gcd(int a, int b){
  if(a==0){
    return b;
  }
  if(b==0){
    return a;
  }
    

     while(a%b!=0){
      int c = a%b;
       a = b;
       b = c;
     }
  return b;
      
    
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;

    int ans = gcd(a,b);

     cout<<" gcd of a & b is : "<<ans;
}