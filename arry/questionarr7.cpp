#include<iostream>
using namespace std;

// find duplicate in array


int duplicate(int arr[],int size){
    int ans=0;
     for (int  i = 0; i < size; i++)
     {
       ans= ans^arr[i];
     }
     
     for (int  i = 1; i < size; i++)

     {
       ans= ans^i;
       
     }
     return ans;

     
}

int main(){
    int arry[5]={1,3,2,4,2};

    int save = duplicate(arry,5);
    cout<<save<<endl;

}