#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    for (int  i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[5]={1,2,7,8,5};
    int brr[6]={3,1,4,5,6,8};

    swapAlternate(arr,5);
    swapAlternate(brr,6);


}