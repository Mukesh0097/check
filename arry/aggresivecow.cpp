#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector <int>arr,int n,int k,int mid){
    int cowCount=1;
    int lastPosition = arr[0];
    for (int i = 0; i < n; i++)
    {
       if(arr[i]-lastPosition>=mid){
        cowCount++;
        if(cowCount==k){
            return true;
            }
            lastPosition=arr[i];
       }
    }
    return false;
    

}

int binarySearch(vector<int>arr,int n,int k){
    int s=0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int e =maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;

        }else{
            e=mid-1;

        }
         mid=s+(e-s)/2;

    }
    return ans;
}

int main(){
    vector <int> arr={1,2,3,4,6};
    int k;
    cout<<"enter the number of cow you wants arrange ";
    cin>>k;
    cout<<"maximum disrtance between your cow should be :"<<binarySearch(arr,5,k);

}