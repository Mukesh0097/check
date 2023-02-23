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

void insertAttail(int d,Node* &tail){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}
Node* getMiddle(Node* head){
        // detect k liye but space complexity in O(n) he isko floyd's cylce detection alogorithm
    if(head == NULL){
        return NULL;
    }
    Node* prev = NULL;
    Node* slow  =  head;
    Node* fast = head;

    while(fast != NULL && fast ->next != NULL){
        fast = fast ->next;
        if(fast != NULL){
            fast = fast ->next;

        }
        prev = slow;
        slow = slow->next;
        
    }
    return prev;

}

void printlist(Node* head){
    Node* temp = head;
    do
    {
        cout<<head->data<<" ";
        head = head->next;

    } while (head != temp);
    cout<<endl;
    
}


int main(){

    Node* list = new Node(1);

    Node* head = list;
    Node* tail = list;

    insertAthead(2,head);
    insertAthead(3,head);
    insertAthead(4,head);
    insertAthead(5,head);
    // insertAthead(6,head);

    Node* prt1 = getMiddle(head);
    Node* prt2 = prt1->next;
    prt1->next=head;
    tail ->next = prt2;

    printlist(head);
    printlist(prt2);





}