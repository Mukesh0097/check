#include<iostream>
using namespace std;

bool  findKey(int arr[],int size,int key){
    if(size==0)
        return false;
    if(arr[0]==key){
        return true;
    }else{
        bool ans = findKey(arr+1, size - 1,key); 
        return ans;
    }
}

int main(){
    int arr[]={5,8,9,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key ;
    cin>>key;

    if (findKey(arr,size,key))
    {
       cout<<"ya get it!"<<endl;
    }else{
        cout<<"no not get it!"<<endl;
    }
    
    
}