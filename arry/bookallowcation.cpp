#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m ,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i] <= mid){
        pagesum+=arr[i];}
       else{
        studentcount++;
        if(studentcount>m||arr[i]>mid){
      return false;
        }
        pagesum=arr[i];}
    }
    return true;
    
}
int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e= sum;
    int mid=s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
    }

    int main(){
        int arr[5]={20,30,40,10,15};
        
        int m;
        cin>>m;

        int ans = allocateBooks(arr,5,m);
        cout<< ans<<endl;

       

    }