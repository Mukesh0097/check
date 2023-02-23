#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of stack
    stack<int> S;

    // push operation

    S.push(5);
    S.push(6);

    // pop operation
    S.pop();

    cout<<"top of the element "<< S.top()<<endl;

    if(S.empty()){
        cout<<"oops stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }


}