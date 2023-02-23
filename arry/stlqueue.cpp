#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>s;

    s.push("mukesh");
    s.push("kumar");
    s.push("prajapt");

    cout<<"fisrt elemnt: "<<s.front()<<endl;
    s.pop();
    cout<<"first elemnt: "<<s.front()<<endl;

    cout<<"size of queue : "<<s.size()<<endl;
}