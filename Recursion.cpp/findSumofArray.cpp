#include<iostream>
using namespace std;

int getSum(int arr[],int size){
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];
    int sum = arr[size-1];

    
    int ans = sum + getSum(arr,size-1);

    return ans;
    
   
    }


int main(){
    int arr[]={3,2,5,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<getSum(arr,size)<<endl;
}