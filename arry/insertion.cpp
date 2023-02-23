#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    int i=1;
    while (i<n)
    {
        int j=i-1;
        int temp=arr[i];
        while (j>=0)
        {
          if (arr[j]>temp)
          {
            arr[j+1]=arr[j];

          }else{
            break;
          }
          j--;
          
        }
        arr[j+1]=temp;
        i++;
        
    }
    
}

void printSorted(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[5]={5,8,9,4,3};
    insertionSort(arr,5);
    printSorted(arr,5);

}
