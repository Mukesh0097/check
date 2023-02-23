#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(7);
    s.insert(7);
    s.insert(9);
    s.insert(10);

    for (auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it =s.begin();
    it++;
    it++; 

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not--> "<<s.count(5)<<endl;
    
    set<int>::iterator itr=s.find(5);
     cout<<*itr<<endl;

    for(auto it = itr;it!=s.end();it++){
        cout<<*it<<endl;
    }cout<<endl;



    

}
