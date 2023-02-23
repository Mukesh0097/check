#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>=arr[j+1])
            {
               swap(arr[j],arr[j+1]);

            }
            
        }
        
    }
    /*for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }*/
    
    
}
void sorted(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[7]={2,13,4,1,3,6,28};
    bubbleSort(arr,7);
    sorted(arr,7);

}