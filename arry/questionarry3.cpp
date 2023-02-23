#include<iostream>

using namespace std;

void reverse(int arr[],int n){
    
    int end=n-1;
   for(int i=0; i<=end; i++)
    {
       int temp = arr[i];
       arr[i]=arr[end];
       arr[end]=temp;

       
      
       
        end--;
       
       
        
    }}
 void printarry(int arr[],int n){
        for (int  i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     
    }
     
    
   
    

int main(){

    int arr[4]={1,4,5,6};
    int brr[3]={5,6,9};
     
   reverse(arr,4);
    //reverse(brr,3);
   

    //(arr,4);
    printarry(arr,4);


    

}