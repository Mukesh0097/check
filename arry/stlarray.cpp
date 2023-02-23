#include<iostream>
#include<bits/stdc++.h>
#include<array>

using namespace std;

int main(){
    int arr[]={1,2,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    //stl
    array<int,4> a={1,5,6,8};
    int size1=a.size();
    
    for (int i = 0; i < size1; i++)
    {
       cout<<a[i]<<" ";

    }
    cout<<endl;
    
    cout<<"to access of any index elemnet in array : "<<a.at(3)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;

    cout<<"first elemt "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;





}