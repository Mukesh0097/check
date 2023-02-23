#include<iostream>
using namespace std;

int nthTerm(int n){
    //fibbonacci series nth term
    if(n==0)
        return n;
    else if(n==1 || n==2)
        return n;
    int a = 1,b = 1, c;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
    
}

int main(){
    int n;
    cin>>n;

    cout<<nthTerm(n)<<endl;
}