#include<iostream>
using namespace std;

class stack{
    // property
    public:
    int data;
    stack* next;

};

stack* top ;

void push(int num){
    stack* temp = new stack();
    if(!temp){
        cout<<"stack overflow"<<endl;
    }else{
        temp -> data = num;
        temp ->next= top;
        top = temp;
    }
}

void pop(){
    stack* temp ;
    if(top == NULL){
        cout<<"stack is out of flow"<<endl;
    }else{
        temp = top;
        top = top ->next;
        free(temp);
    }
}

bool isempty(){
    if(top == NULL){
        return 1;
    }else{
        return 0;

    }
    
}
void peek(){
    if(!isempty()){
       cout<<"peak elemnt "<<top->data<<endl;
    }
}

void display(){
    if(top == NULL){
        cout<<"stack overFlow"<<endl;
    }
    stack* temp = top;
    while (temp !=  NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}


int main(){

    push(56);
    push(12);
    push(11);
    push(45);

    display();
    pop();
    display();
    if(isempty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

   peek();

    



}