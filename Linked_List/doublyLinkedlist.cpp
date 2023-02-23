#include<iostream>
using namespace std;

class list{
    public:
    int data;
    list* prev ;
    list* next;

    public:
    list(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;

    
    }

    ~list(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;

        }
        cout<<"memory is free for node with data "<<value<<endl;

        
    }
};

void insertAthead(list* &head,list* &tail,int d){

    if (head == NULL)
    {
        list* temp = new list(d);
        head = temp;
        tail = temp;

    }else{
        list* temp = new list(d);
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
    
    

}

void insertAttail(list* &tail, list* &head, int d){
    
    
    if(tail == NULL){
        list* temp = new list(d);
        tail = temp;
        head = temp;

    }else{
        list* temp = new list(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;


    }
    
}

void insertAtposition(list* &head,list* &tail,int position,int d){
    if(position==1){
    insertAthead(head,tail,d);
    return ;

   }
   
    list* temp = head ;
   int cnt = 1;
   while (cnt<position-1)
   {
    temp = temp->next;
    cnt++;
   }

   if(temp->next == NULL){
    insertAttail(tail,head,d); 
    return;
   }
   list* middle = new list(d);
   middle->next = temp->next;
   temp->next->prev = middle;
   temp->next = middle;
   middle->prev = temp;


   


}
void deletenode(int position,list*&head,list*&tail){
    if(position==1){
        list* temp = head;
        temp->next->prev = NULL;
         head = head->next;
        temp->next = NULL;
       
        
        delete temp;

    }else{
       list* curr = head;
        list* last = NULL;

        int count = 1;
        while (count<position)
        {
                last = curr;
                curr = curr->next;
                count++;
                

        }

        if(curr->next == NULL){
           
            tail = last;
        }
         curr->prev = NULL;
         last->next = curr->next;
         curr->next = NULL;
        
          delete curr;

       
        


       
      

        
        
    }
}


void printlist(list*head){
    list* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int getLength(list* head){
    int len = 0;
     list* temp = head;

    while(temp != NULL){
        len++;

        temp = temp->next;
    }
   return len;
}



int main(){

   // list* node1 = new list(10);
    list* head = NULL;
    list* tail = NULL;

    insertAthead(head,tail,23);
    insertAttail(tail,head,14);
    insertAthead(head,tail,78);
    insertAtposition(head,tail,1,45);
    insertAtposition(head,tail,2,55);
    insertAtposition(head,tail,6,56);
    deletenode( 6,head,tail);
    printlist(head);
    cout<<tail->data<<endl;

    cout<<getLength(head)<<endl;




}