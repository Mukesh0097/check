#include<iostream>
using namespace std;

int sumOfarray(int arr[],int size){
    int sum=0;

    for (int i = 0; i < size; i++)
    {
       sum=sum+arr[i];
    }
    return sum;
    
}

int main(){
    int arr[5]={5,8,9,2,3};

    cout<<"sum of all element of an array-->"<<sumOfarray(arr,2)<<endl;

}