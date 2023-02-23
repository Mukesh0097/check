#include<iostream>
using namespace std;
//find unique in array

int  findUnique(int arr[],int size){
    int ans=0;
    for (int  i = 0; i < size; i++)
    {
      ans= ans^arr[i];
    }
    return ans;

}

int main(){
    int arr[9]={2,3,2,3,1,7,7,9,1};
    int save = findUnique(arr,9);
    cout<<save<<endl;
}