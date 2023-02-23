#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    public:
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;

    }
};

void insertAthead(int d,Node* &head){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void printlist(Node* head){

    while(head != NULL){

        cout<<head->data<<" ";
        head = head ->next;
    }
    cout<<endl;
}

Node* kReverse(Node* head ,int k){
    //basa case
    if(head == NULL){
        return NULL;
    }

    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head->next = kReverse(forward,k);
    }
    return prev;
}

int main(){

    Node* head = new Node(5);
   insertAthead(6,head);
   insertAthead(7,head);
   insertAthead(8,head);
   insertAthead(9,head);
   insertAthead(4,head);

   head = kReverse(head,3);
   printlist(head);
}
