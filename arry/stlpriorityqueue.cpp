#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int>maxi;
    maxi.push(1);
    maxi.push(4);
    maxi.push(13);
    maxi.push(9);
    int n =maxi.size();
    for (int  i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    cout<<"empty or not: "<<maxi.empty()<<endl;

    //min heap
    priority_queue<int ,vector<int>,greater<int>>mini;
    mini.push(4);
    mini.push(8);
    mini.push(6);
    mini.push(2);

    int m=mini.size();
    for (int  i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"empty or not: "<<mini.empty()<<endl;


    


    


}