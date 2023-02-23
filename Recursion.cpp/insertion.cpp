#include<iostream>
using namespace std;

void insertionSort(int* arr,int size,int i){

    if(i==size)
        return ;
   

    int  j = i - 1;
    int temp = arr[i];
    while (j>=0)
    {
        if (arr[j]>temp)
        {
            arr[j+1] = arr[j];
        }else{
            break;
        }
        j--;
        
    }
    arr[j+1]= temp;
     insertionSort(arr,size,i+1);
    
    
}

int main(){
    int arr[] = {5,8,4,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size,1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}