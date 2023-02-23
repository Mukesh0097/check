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

void printlist(Node* head){

    while(head != NULL){

        cout<<head->data<<" ";
        head = head ->next;
    }
    cout<<endl;
}

Node* reverse(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* ans = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return ans;
   
}

void reverselist(Node* head){
    head = reverse(head);
    printlist(head);
}

int getlength(Node* head){
    int cnt = 0;

    while (head != NULL)
    {
       cnt += 1;
       head = head->next;
    }

    return cnt;
    
}

int getMiddle(int val ,Node* head){
        Node* prev = NULL;
        int cnt = 0;
         

            while (cnt < val/2 + 1)
            {
                prev = head;
                head = head->next;
                cnt++;
            }

         return  prev->data;
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



   

   

int value = getlength(head);
    
    
            
   cout<<"list middle dta "<<getMiddle(value,head);
            
        
  }

  

 

    

    



