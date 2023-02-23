#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector <int>> triplet(vector <int> arr){
    vector<vector <int> >ans;

    sort(arr.begin(),arr.end());

    for (int i = 0; i < arr.size()-2; i++)
    {
        int start = i+1;
        int end =arr.size()-1;

        while (start < end)
        {
           if(arr[i]+arr[start]+arr[end]==15){
            vector<int>temp;
            temp.push_back(arr[i]);
             temp.push_back(arr[start]);
            temp.push_back(arr[end]);
           
            ans.push_back(temp);

            return ans;
            
            
           }else if(arr[i]+arr[start]+arr[end]<8){
            start++;
           }
           else{
            end--;
           }
        }
        
    }

    


    
}
int main(){
  vector < int> arr={2,5,8,0,1,3};

   vector<vector <int>>store=triplet(arr);

   for (int i = 0; i < store.size(); i++)
   {
    for (int j = 0; j < store[i].size(); j++)
    {
       cout<<store[i][j]<<" ";
    }
    
   }
   



}