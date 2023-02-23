#include<iostream>
#include<map>
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

void insertAttail(int d,Node* &tail){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}


bool checkListloop(Node* head){
    //approach 1
    // if(head == NULL){
    //     return 1;
    // }
    // Node* temp = head->next;

    // while(temp != NULL && temp != head){
    //     temp = temp ->next;

    // }

    // if(temp == head){
    //     return 1;
    // }else{
    //     return 0;
    // }


    // approach 2

    if(head == NULL)
        return 0;
    map<Node*,bool>vis;
    Node* temp = head;

    while (temp != NULL)
    {
        if (vis[temp]==true)
        {
            return true;
        }
        vis[temp] = true;
        temp = temp->next;
        
    }
    return false;
    
    
    
}

 Node* findloop(Node* head){// detect k liye but space complexity in O(n) he isko floyd's cylce detection alogorithm
    if(head == NULL){
        return NULL;
    }
    Node* slow  =  head;
    Node* fast = head;

    while(fast != NULL && slow != NULL){
        fast = fast ->next;
        if(fast != NULL){
            fast = fast ->next;

        }
        slow = slow->next;
        if(slow == fast){
            
            return slow;
        }
    }
    return NULL;

}

Node* startingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = findloop(head);
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection -> next;

    }
    return slow;
}

void removeNode(Node* &head){
    if(head==NULL){
        return ;
    }

    Node* temp = startingNode(head);
    Node* custum = temp;
    while (custum->next != temp)
    {
        custum = custum->next;
    }
    

    custum ->next = NULL;

   

    
}

int main(){

     Node* list = new Node(1);

    Node* head = list;
    Node* tail = list;

    insertAthead(5,head);
    insertAthead(6,head);
    insertAthead(7,head);
    insertAthead(8,head);
    insertAthead(9,head);
    insertAttail(2,tail);
    insertAttail(3,tail);
    insertAttail(52,tail);
    insertAttail(20,tail);
    printlist(head);
    if(checkListloop(head)){
        cout<<"list is circular"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    tail->next = head->next;

    if(checkListloop(head)){
        cout<<"list is circular"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    cout<<"loop got at "<<findloop(head)->data<<endl;
    cout<<"loop  start at "<<startingNode(head)->data<<endl;

    removeNode(head);
    //cout<<"loop got at "<<findloop(head)->data<<endl;

    if(checkListloop(head)){
        cout<<"list is circular"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    



}