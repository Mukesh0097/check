#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// pair sum 
vector < vector <int> > pairSum(vector <int> arr, int n){
   vector <vector<int>> ans;
  
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
          
            if ((arr[i]+arr[j])==8)
          {
            vector <int> temp;
           temp.push_back(min(arr[i],arr[j]));
           temp.push_back(max(arr[i],arr[j]));
           ans.push_back(temp);
            

            
          }



        }
         
          
          
          

     }
        
    sort(ans.begin(),ans.end());

    return ans;
   
    
   

    
}

int main(){
    vector <int> arr={2,4,6,8,6};
  vector<vector<int>> save = pairSum(arr,5);

  for (int i = 0; i < save.size(); i++)
  {
    for (int j = 0; j < save[i].size(); j++)
    {
      cout<<save[i][j]<<" ";
    }
    
  }
  
   

    
    
    
}