#include<iostream>
using namespace std;

int main(){
    uint32_t n;
   cin>>n;
    int count=0;

    while (n!=0)
    {
       if (n&1)
       {
         count++;

       }
       n>>1;
    }
    
    cout<<"number of bit in this number-->"<<count;
}
    