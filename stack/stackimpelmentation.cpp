#include<iostream>
using namespace std;

class Node{

    public:
    int size;
    int *arr;
    int top;



    Node(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
        
    }

    void push( int num){
        if(size-top >1){
            top++;
            arr[top] = num;
        }else{
            cout<<"stack is overflow"<<endl;
            
        } 

    }



    void pop(){
        if(top >= 0){
           top--;
        }else{
            cout<<"stack is underflow"<<endl;
        }

    }


    int peak(){
        if(top >= 0 ){
            return arr[top];
        }else{
           cout<<"stack is empty"<<endl;
           return -1;
        }

    }
    bool isEmpty(){
        if(top == -1){ 
            return 1;
        }else{
            return 0;
        }

    }

};
  
int main(){

    Node st(5);

   st.push(45);
   st.push(12);
   st.push(13);
   st.push(15);

   cout<<"top element "<<st.peak()<<endl;

    st.pop();
    
    cout<<"top element "<<st.peak()<<endl;

    st.pop();

    cout<<"top element "<<st.peak()<<endl;


    st.pop();

    cout<<"top element "<<st.peak()<<endl;

    st.pop();

    cout<<"top element "<<st.peak()<<endl;

    st.push(45);
    st.push(12);
    st.push(13);
    st.push(15);
    st.push(23);
    st.push(47);

    



    

   
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }







   
  


}