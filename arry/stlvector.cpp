#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n; 
    cin>>n;
    vector<int> a(n+1,true);
    cout<<"print a "<<endl;
    for(int i:a){
        cout<<i<<" ";

    }cout<<endl;

    vector <int>  last(a);
     cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<<" ";

    }cout<<endl;

    vector <int> b(4);
     cout<<"print b "<<endl;
    for(int i:b){
        cout<<i<<" ";

    }cout<<endl;


    cout<<"capacity " <<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capcity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capcity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capcity "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capcity "<<v.capacity()<<endl;

   
    cout<<" elemnt in vector "<<v.at(3)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.reserve(4);
    

    cout<<" after pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    vector<int> arr = {1,5,6,7,2};

int k=arr.size();

    cout<<"size of ARRY "<<k;



}