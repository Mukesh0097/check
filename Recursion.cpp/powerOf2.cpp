#include<iostream>
using namespace std;

int power(int n){
    //base condition
    if(n==0)
        return 1;
    // recursive relation
    int smallerProblem = power(n-1);
    int biggerProblem  = 2*smallerProblem;

    return biggerProblem;    
}

int main(){
    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans<<endl;
}