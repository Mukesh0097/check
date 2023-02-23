#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//find duplicate in array


vector <int> findDuplicate(vector <int> v){
    int n=v.size();
    vector<int> ans;
     sort(v.begin(),v.end());

    
    for (int i = 1; i < n; i++)
    {
        if(v[i-1]==v[i]){
            ans.push_back(v[i]);

        }
    }
    return ans;

    
}

int main(){
    vector <int> b={4,3,2,4,8,2,3,8};


    vector<int>ans=findDuplicate(b);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    


}