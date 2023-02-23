#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> selectionSort( vector<int> arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        int initialIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]>=arr[initialIndex])//for decresing order
            {
                initialIndex=j;

            }
            
            
            
        }
        swap(arr[initialIndex],arr[i]);

       
        
    }
     return arr;
}

int main(){
    vector<int> arr = {5,4,8,9,6};

    vector <int> ans=selectionSort(arr,5)   ;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    


}