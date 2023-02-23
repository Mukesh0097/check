#include<iostream>
using namespace std;
//quick short


int  partion(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;
    for (int  i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot)
            count++;
    }
    int pivotIndex = s + count;
    swap(arr[s],arr[pivotIndex]);
    int  i = s , j = e;

    while (i < pivotIndex && j >pivotIndex)
    {
        while (arr[i]<=arr[pivotIndex])
        {
            i++;
        }
        while (arr[j]>arr[pivotIndex])
        {
            j--;
        }
        if (i<pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    
    return pivotIndex;

    
}

void quickSort(int arr[],int s,int e){
    //base condition
    if(s>=e)
        return;

    int p = partion(arr,s,e);

    //recursive call

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);

    
}

int main(){
    int arr[]={4,7,9,3,2,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,size-1);

    for (int  i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}