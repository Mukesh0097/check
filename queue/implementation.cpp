#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    //constructor
    queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;

    }


    void push(int data){
        if(rear == size){
                cout<<"queue is full"<<endl;
        }else{
            arr[rear] = data;
            rear++;

            
        }
        
    }

    void pop(){
        if(front == rear){
            cout<<"not possible"<<endl;
        }else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;

            }
        }
    }

    bool isEmpty(){
        if(front == rear){
            cout<<"its empty"<<endl;
            return true;
        }else{
            cout<<"its not empty"<<endl;
            return false;
        }
    }

    int qfront(){
        if(front == rear){
            return -1;
        }else{
            return arr[front];
        }
    }


};

int main(){

    queue st(5);

    st.push(14);
    st.push(16);
    st.push(17);
    st.push(18);
    st.push(19);
    

 
   

    st.pop();
    cout<<st.qfront()<<endl;
    st.pop();
    cout<<st.qfront()<<endl;
    st.pop();
    cout<<st.qfront()<<endl;

    st.isEmpty();
    st.pop();
    st.isEmpty();
    st.pop();
    st.isEmpty();

}
