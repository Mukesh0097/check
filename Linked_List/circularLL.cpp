#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data  = d;
        this->next = NULL;

    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;


        }
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



void printList(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"empty List "<<endl;
    }

    do
    {
        cout<<tail->data<<" ";
        tail= tail -> next;
    } while (tail != temp);
    cout<<endl;
}

 map<Node*,bool>vis;

bool isCircular(Node* head){
   

    if(head == NULL){
        return 0;
    }

    if(!vis[head]){
        vis[head] = true;
        isCircular(head->next);
    }
    else{
        return 1;
    }
}


bool detectCyle(Node*head){//detect k liye
    if(head == NULL)
        return false;
        
    map<Node*,bool>vis;
    Node* temp = head;

    while(temp != NULL){
        if(vis[temp]==true){
            return true;
        }
    vis[temp] = true;
    temp = temp ->next;
    }
    return false;
}
    

    Node* findloop(Node* head){
        // detect k liye but space complexity in O(n) he isko floyd's cylce detection alogorithm
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
    
    while(slow == intersection){
        slow = slow->next;
        intersection = intersection -> next;

    }
    return slow;
}

void removeNode(Node* &head){
    Node* temp = startingNode(head);
    Node* custum = temp;
    while (custum->next != temp)
    {
        custum = custum->next;
    }

    custum ->next = NULL;
    
}

    

    // if(tail == NULL){
    //     return true;
    // }
    // Node* temp = tail -> next;

    // while(temp != NULL && temp != tail ){

    //     temp = temp -> next;


    // }
    // if(temp == NULL){
   
    //     return false;
    // }
    // if(temp ==tail){
    //     return true;
    // }



void  deletionNode(Node* &tail,int value){
    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != value){
        

        prev = curr;
        curr = curr->next;


    }

    if(curr == prev){
        tail = NULL;
    }

    else if(curr == tail){
            tail = prev;

    }

    prev->next = curr->next;
    curr->next = NULL;

    delete curr;

    
}


int main(){

   Node* list = new Node(8);
   Node* head = list;
   Node* tail = list;
   insertAthead(9,head);
   insertAthead(11,head);
   insertAthead(12,head);
   insertAthead(10,head);
   insertAthead(3,head);
   insertAthead(7,head);

   tail->next = head->next;
    //position me previous tail ki value ya ll me kis number k age dalna usk age dalne k liye

    
    //printList(head);
    
   

    if (findloop(head) != NULL)
    {
       cout<<"loop is present"<<endl;
    }else{
        cout<<"loop is not present"<<endl;
    }
    

   


    removeNode(head);

    cout<<"after remove loop"<<endl;


    if(isCircular(head)){
        cout<<"circular hai bhaiya "<<endl;
    }else{
        cout<<"not circular "<<endl;
    }

    if (findloop(head) != NULL)
    {
       cout<<"loop is present"<<endl;
    }else{
        cout<<"loop is not present"<<endl;
    }

    
    


    



    

     // printList(tail);
    // deletionNode(tail,10);

//     printList(tail);

//     insertInll(tail,10,100);
//     printList(tail);

//     insertInll(tail,10,14);
//     printList(tail);
    
//     insertInll(tail,100,19);
//     printList(tail);
     
//     insertInll(tail,14,11);
//     printList(tail);
//     deletionNode(tail,10);
//      printList(tail);
//     deletionNode(tail,100);
//     printList(tail);

    


// }

}
   