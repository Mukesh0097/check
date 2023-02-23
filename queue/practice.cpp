#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool static issort(pair<int,int> a,pair<int,int> b){
       if(a.first == b.first) return a.second < b.second;
        return a.first<b.first;
    }
    
   void findPlatform(int a[], int dep[], int n)
    {
        vector<pair<int,int>> trains;
        for(int i = 0;i < n;i++){
            trains.push_back({a[i],dep[i]});
        }
        sort(trains.begin(),trains.end(),issort);
        vector<int> platforms;
       
        for(int i=0;i<n;i++){
            pair<int,int> dummy = trains[i];
            bool flag = true;
            for(int i=0;i<platforms.size();i++){
                
                if(platforms[i]<dummy.first){
                    platforms[i] = dummy.second;
                    flag = false;
                    break;
                }
            }
            
            if(flag){
                platforms.push_back(dummy.second);
            }
            
        }
        // return platforms. size();
    }

int main(){


    int a[6] = {900,940,950,1100,1500,1800};
    int dep[6] ={910,1200,1120,1130,1900,2000};

    
        findPlatform(a,dep,6) ;
       
}