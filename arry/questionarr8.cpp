#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector <int>  intersection(vector <int> arr,vector <int> brr,int n,int m){
  /* vector <int > ans;
   for (int  i = 0; i < n; i++)
   {
     int element= arr[i];
     for (int j= 0; j < m; j++)
     {
     if(element<brr[j])
      break;
      if (element==brr[j])
      {
         ans.push_back(element);
         brr[j]=INT_MIN;
         break;
      }
      
     }
     
   }
   return ans;*/
   //below code is optimize
   

   int i=0,j=0;
   vector<int> ans;
   
   while (i<n && j<m)
   {
      if(arr[i]==brr[j])
      {
         ans.push_back(arr[i]);
        i++;
         j++;

      }
      else if(arr[i]<brr[j]){
         i++;

      }
      else{
         j++;
      }
   }

   return ans;
   

   
}


int main(){
 vector <int> arr={1,4,5,6};
 vector<int> brr={2,3,4,5,6};
 vector <int> save=intersection(arr,brr,4,5);

  for (int i = 0; i <save.size(); i++)
  {
   cout<<save[i]<<" ";
  }

  cout<<endl;
  

  
  

   
}