#include<iostream>
#include<vector>
#include<bits/stdc++.h>

int getPivot(_Vector<int>& arr,int n){
    
}



int binarySearch(vector<int>& arr,int s,int e,int k){
        int start=s;
        int end=e;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(k==arr[mid]){
                return mid;
                
            }else if(k>arr[mid]){
                start=mid+1;
                
            }else{
                end=mid-1;
            }
               mid=start+(end-start)/2;
               
               
        }
               return -1;
    }



int findPosition(vector<int>& arr, int n, int k)
{
   
    
    
        
        int pivot=getPivot(arr,n);
        if(k>=arr[pivot]&&k<=arr[n-1]){
            return binarySearch(arr,pivot,n,k);
        }else{
            return binarySearch(arr,0,pivot-1,k);
        }
        
    }

    int main(){
        vector<int> arr={7,8,1,3,5};
        
        cout<<"key position"<<findPosition(arr,5,7);
    }
