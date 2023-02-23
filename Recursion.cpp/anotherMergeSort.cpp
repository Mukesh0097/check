#include<iostream>
using namespace std;
void mergeSort(int* arr,int s,int e ){

    if(s>=e)
        return ;
    int mid = (e+s)/2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,e);

    
    
}

int main(){
    int arr[]={8,5,7,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    mergeSort(arr,0,size-1);

}