#include<iostream>
#include<list>
using namespace std;

int main(){
     list<int> l;
     list <int> n(5,100);
     cout<<"print n "<<endl;
    for(int i:n){
        cout<<i<<" ";

    }cout<<endl;

     l.push_back(3);
     l.push_front(4);

     cout<<"print l "<<endl;
    for(int i:l){
        cout<<i<<" ";

    }cout<<endl;
     l.erase(l.begin(),l.end());
     cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";

    }cout<<endl;

    cout<<"empty or not "<<l.empty()<<endl;
    cout<<"size of list "<<l.size()<<endl;  
     
}
