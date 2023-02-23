#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_front(45);
    d.push_front(78);
    d.push_back(79);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    d.pop_back();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    d.pop_back();

    if(d.empty()){
        cout<<"que is empty"<<endl;
    }else{
        cout<<"que is not empty"<<endl;
    }
    
     


    
}