#include<iostream>
using namespace std;
//condition is here that array element either increasing or decreasing order
//binarysearch


int binarySearch(int arr[],int size ,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;


    while (start <= end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }

        if (key>arr[mid])
        {
            start=mid+1;
        }else{
            end=mid-1;
            
        }

        mid=start + (end-start)/2;
        
        
    }
    return -1;
    
    }


int main(){
    int even[6]={2,4,9,10,15,23};
    int odd[5]={6,7,8,15,19};

    int evenIndex=binarySearch(even,6,23);
    cout<<"index of key value "<<" "<<evenIndex<<endl;

    int oddIndex=binarySearch(odd,5,15);
    cout<<"index of key value "<<" "<<oddIndex<<endl;


}