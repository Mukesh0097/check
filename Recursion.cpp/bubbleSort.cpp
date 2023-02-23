#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    if(size==0||size==1)
        return ;
    
    for (int  i = 0; i < size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }

    bubbleSort(arr,size-1);
    
}


int main(){
    int arr[]={4,6,1,8,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    




}