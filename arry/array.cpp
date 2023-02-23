#include<iostream>
using namespace std;
void printArray(int arry[],int len){

    

     for (int i = 0; i < len; i++)
     {
       
       cout<<arry[i]<<" ";
     }
}

int main(){
    
    int num[15]={2,3};
    printArray(num ,2);
    
     
}