#include<iostream>
using namespace std;

void selectionSort(int* arr,int size){
    if(size==0||size==1)
        return ;

       
   
    for (int i = 1; i < size; i++)
    {
        if(arr[i]<=arr[0]){


            swap(arr[i],arr[0]);

            
            

        }
        
    }

    
        selectionSort(arr+1,size-1);
}
    

    



int main(){
    int arr[] = {5,3,2,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
      

      selectionSort(arr,size);

      for (int i = 0; i < size; i++)
      {
        cout<<arr[i]<<" ";
      }cout<<endl;
      
}