#include<iostream>
using namespace std;

bool isPresent(int arr[][3],int target ,int row ,int col){
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
           if(arr[i][j]==target){
            return 1;
           }
       }
       
    }

    return 0;
    
}

int main(){
    int arr[4][3];


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cin>>arr[i][j];
        
        }
        
    }

    int target;
    cout<<"enter the target value ";
    cin>>target;


    if (isPresent(arr,target,4,3))
    {
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    
    
}