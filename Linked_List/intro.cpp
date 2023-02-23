#include<iostream>
#include<map>
using namespace std;

class linkedlist{
    public:
    int data;
    linkedlist *node;

    public:
    linkedlist(int n){
       this->data = n;
       this->node = NULL;

    }
    ~linkedlist(){
        int value = this->data;

        if(this->node != NULL){
            delete node;
            this->node = NULL;

        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
 
void insertatTail (linkedlist* &tail,int d){
    linkedlist* temp = new linkedlist(d) ;
    tail->node = temp;
    tail = temp;
}



void insertAthead(linkedlist* &head,int d){
    linkedlist* temp = new linkedlist(d) ;
    temp->node = head;
    head =  temp;



}

void insertInmiddle(linkedlist* &tail,   linkedlist* &head,int d,int position){
   
   if(position==1){
    insertAthead(head,d);
    return ;

   }
   
   linkedlist* temp = head ;
   int cnt = 1;
   while (cnt<position-1)
   {
    temp = temp->node;
    cnt++;
   }

   if(temp->node == NULL){
    insertatTail(tail,d); 
    return;
   }
   linkedlist* middle = new linkedlist(d);
   middle->node = temp->node;
   temp->node = middle;


   

}

void deletenode(int position,linkedlist*&head,linkedlist*&tail){
    if(position==1){
        linkedlist* temp = head;
        head = head->node;
        temp->node = NULL;
        delete temp;

    }else{
        linkedlist* curr = head;
        linkedlist* prev = NULL;

        int count = 1;
        while (count<position)
        {
                prev = curr;
                curr = curr->node;
                count++;
                

        }

        if(curr->node == NULL){
           
            tail = prev;
        }
         prev->node = curr->node;
       
        


       
        curr->node = NULL;

        delete curr;

        
    }
}
    map<linkedlist*,bool>vis;

bool isCircular(linkedlist* head){
     if(head == NULL){
        return 0;
    }

    if(!vis[head]){
        vis[head] = true;
        isCircular(head->node);
    }
    else{
        return 1;
    }
}

bool detectCyle(linkedlist*head){
    if(head == NULL)
        return false;
        
    map<linkedlist*,bool>vis;
    linkedlist* temp = head;

    while(temp != NULL){
        if(vis[temp]==true){
            return true;
        }
    vis[temp] = true;
    temp = temp ->node;
    }
    return false;
}

    
    

//     if(head == NULL){
//         return true;
//     }
//    linkedlist* temp = head -> node;

//     while(temp != NULL && temp != head ){

//         temp = temp -> node;


//     }
//     if(temp == NULL){
   
//         return false;
//     }
//     if(temp ==head){
//         return true;
//     }




void printLinkedlist(linkedlist* & head){

    if(head == NULL){
        cout<<"empty list "<<endl;
    }
    linkedlist* temp = head;


    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->node;

    }
    cout<<endl;
    
}

linkedlist* findloop(linkedlist* head){
    if(head == NULL){
        return NULL;
    }
    linkedlist* slow  =  head;
    linkedlist* fast = head;

    while(fast != NULL && slow != NULL){
        fast = fast ->node;
        if(fast != NULL){
            fast = fast ->node;

        }
        slow = slow->node;
        if(slow == fast){
            //cout<<"loop present at "<< slow->data<<endl;
            return slow;
        }
    }
    return NULL;


}

linkedlist* startingNode(linkedlist* head){
    if(head == NULL){
        return NULL;
    }
    linkedlist* intersection = findloop(head);
    linkedlist* slow = head;
    
    while(slow != intersection){
        slow = slow->node;
        intersection = intersection -> node;

    }
    return slow;
}

void removeNode(linkedlist* head){
    
    linkedlist* temp = startingNode(head);
    linkedlist* custum = temp;


   while(custum->node != temp ){
         custum =custum -> node;

   }
   custum -> node = NULL;
}

 

int main(){
    //created linked list
   linkedlist *Node = new linkedlist(5);
    

    // //head pointed to Node
    linkedlist* head = Node;
    linkedlist* tail = Node;
   

    insertatTail(tail,14);
    insertatTail(tail,16);
    insertInmiddle(tail,head,22,4);

    tail->node = head -> node;
    // deletenode(4,head,tail);
    // linkedlist* start = head;
    //  printLinkedlist(head);
    // cout<<"tail "<<tail->data<<endl;

    if(isCircular(head)){
        cout<<"circular he "<<endl;
    }else{
        cout<<"not circular "<<endl;
    }

    if(findloop(head) != NULL){
        cout<<"loop present "<<endl;
    }else{
        cout<<"loop is not present "<<endl;
    }
     

    linkedlist* loop = startingNode(head);
    cout<<"loop start at "<<loop->data<<endl;
 
    removeNode(head);

    printLinkedlist(head);


    // if (detectCyle(head))
    // {
    //    cout<<"cycle is present "<<endl;
    // }else{
    //     cout<<"cycle is not present"<<endl;
    // }
    
   



}