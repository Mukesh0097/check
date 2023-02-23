#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    // creating a 2d array
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i]  = new int[m];
    }
    //taking input colomn wise 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cin>>arr[j][i];
        }
        
    }
     
     //taking output

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

        
    }

    //memory reliesing
    for (int i = 0; i < n; i++)
    {
       delete []arr[i];
    }

    delete []arr;
    
    
    
}