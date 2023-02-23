#include<iostream>
using namespace std;

void print(int arr[],int n,int start = 0){
    for (int i = start ; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={2,5,3,8,9};
    print(arr,5);//without default argument
    cout<<endl;
    print(arr,5,2);//with default argument
}