#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
     
     int ans=0;
      int i=0;

    while(n != 0){
        int rem=n & 1;
        cout<<rem<<endl;
        
        ans=(rem * pow(10,i))+ans;

        n=n >> 1;
        i++;



    }

    int num=4&1;
    cout<<num<<endl;


    cout<<ans<<endl;
}