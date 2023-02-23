#include<iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n){
        int j = 0;
        if(i==(n+1)/2){
            cout<<" ";
            while(j<=(n+1)){
                cout<<"*";
                j++;
            }
        }else{
            while(j<=(n+1)){
                if((j==1) || (j==n+1)){
                    cout<<"*"<<" ";
                }else{
                    cout<<" ";
                }
                j++;
            }
        }
        i++;
        cout<<endl;
    }
   
    
}