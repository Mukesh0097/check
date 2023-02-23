#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int s = 0;
    int end = n-1;
    int mid = s +(end - s)/2;


    while (s<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            end =mid;

        }
        mid = s +(end - s)/2;
    }

    return s;
    
}
int peakValue(int arr[],int n){
    int s = 0;
    int end = n-1;
    int mid = s +(end - s)/2;


    while (s<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            end =mid;

        }
        mid = s +(end - s)/2;
    }

    return arr[s];
    
}


int main(){

    int arr[8]={2,3,4,5,6,5,4,2};

    cout<<"peak index of mountain array is-->"<<peakIndex(arr,8)<<endl;
    cout<<"peak value of mountain array is-->"<< peakValue(arr,8);
    
    }
