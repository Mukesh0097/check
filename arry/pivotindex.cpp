#include<iostream>
using namespace std;
//pivot index which right sum= left sum


int pivoIndex(int arr[],int size){
    /*int rightSum=0;
    for (int  i = 0; i < size; i++)
    {
        rightSum+=arr[i];
    }

    int totalsum = rightSum;
    for (int i = 0; i <size; i++)
    {
       rightSum-=arr[i];
       if ((2*rightSum-totalsum)+ arr[i]==0)
       {
        return i;
       }
       
    }
    return -1;*/
    int s=0;
    int e=size-1;
    int mid = s+ (e-s)/2;

    while (s<e)
    {
       if (arr[mid]>=arr[0])
       {
           s=mid+1;
       }else{
        e=mid;
       }
       mid=s+(e-s)/2;
       
    }
    return s;
    
    
}

int main(){
    int arr[4]={2,3,5,8};

    cout<<"pivot index of an array-->"<<pivoIndex(arr,4);

}