#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int prod=1;
    int sum=0;

    for (int i = n; i > 0; i=i/10)
    {
       int digit=i%10;
       prod=prod*digit;
       sum=sum+digit;

    }
    cout<<prod<<"\n";
    cout<<sum<<endl;
    int answer=prod-sum;
    cout<<answer;
    
}