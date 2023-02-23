#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){
    if(n==0)
        return ;

    sayDigit(n/10,arr);
    n=n%10;

    cout<<arr[n]<<endl;
}


int main(){
    int n;
    cin>>n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eighth","nine"};

    sayDigit(n,arr);
}