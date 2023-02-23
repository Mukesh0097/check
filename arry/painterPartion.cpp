#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int k,int mid){
    int painter=1;
    int painBoard=0;
    for (int i = 0; i < n; i++)
    {
        if (painBoard + arr[i]<=mid)
        {
           painBoard+=arr[i];
        }else{
            painter++;
            if (painter>k|| arr[i]>mid )
            {
               return false;

            } 
            painBoard=arr[i];
            
        }
        
    }
    return true;
}

int binarySearch(int arr[],int n ,int k){
    int s =0;
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum= sum+arr[i];

    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if (ispossible(arr,n,k,mid))
        {
           ans=mid;
           e=mid-1;

        }
        else{
            s= mid+1;

        }
        mid = s + (e-s)/2;
        
    }
    return ans;
    

    
}

int main(){
    int arr[4]={5,5,5,5};

    cout<<binarySearch(arr,4,2);

}