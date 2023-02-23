#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation of queue using stl
        queue<int>q;

    //insert element in a queue
    q.push(13);
    q.push(14);
    q.push(15);

    //get size of queue
    cout<<"size of queue:"<<q.size()<<endl;
    //print element in a queue

    while (q.size() != 0)
    {
       cout<<q.front()<<endl;//fifo order first in first out
       q.pop();
    }
    

    if(q.empty())//this function show queue is empty or not empty
        cout<<"queue is empty"<<endl;
    else
        cout<<"queue is not empty"<<endl;



}