#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
     
     double ans=0;
      int i=0;

    while(n != 0){
        int rem=n & 1;
        ans=(rem * pow(10,i))+ans;

        n=n >> 1;
        i++;



    }
    cout<<ans<<endl;
}