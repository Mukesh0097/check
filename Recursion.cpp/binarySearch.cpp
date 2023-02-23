#include<iostream>
using namespace std;

bool binarySearch(int arr[],int size,int s ,int e,int key){
    if(s>e){
        return false;

    }
    int mid = s + (e-s)/2;

    if(arr[mid]==key){
        return true;
    }

    if (arr[mid]<key)
    {
        return binarySearch(arr,size,mid+1,e,key);
    }else{
        return binarySearch(arr,size,s,mid-1,key);
    }
    
}

int main(){
    int arr[]={4,8,9,10,15,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int s = 0;
    int e = size-1;


    if(binarySearch(arr,size,s,e,key)){
        cout<<"present"<<endl;

    }else{
        cout<<"absent"<<endl;
    }
}