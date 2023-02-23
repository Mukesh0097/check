#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int arr[3]={3,3,2};

    vector<int> ans;

    for (int i = 0; i < 3; i++)
    {
        ans.push_back(arr[i]);
    }

    sort(ans.begin(),ans.end());

    int start=0;

    while (start<3){

        if(ans[start-1]==ans[start]){

            start++;
        }
        int count =1;
        int j=1;
        while (j<3)
        {
            if(ans[start]==ans[j]){

                count+=1;
                j++;

            }
        }
        cout<<count<<endl;
        
        
    }
    
    
    
     

    
         
       
   
}