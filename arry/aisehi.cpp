#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;

    for (int i = 2; i < n; i++)
    {
        cout<<prime[i]<<" ";
    }

    


}