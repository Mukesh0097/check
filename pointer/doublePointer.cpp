#include<iostream>
using namespace std;

void update(int** q){
   // q = q + 1;
    //kuch change hoga - NO
   //*q = *q + 1;
    //kuch change hoga - P ki value change 
    **q = **q + 1;
    //kuch change hoga - i ki value change

}

int main(){

    int i = 7;
    int* p = &i;
    int**q = &p;

   /*
   
    //to give i value ways
    cout<<i<<endl;
    cout<<*p<<endl; 
    cout<<**q<<endl;

    //to give i address ways
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    

    // to give p address ways
    cout<<&p<<endl;
    cout<<q<<endl;
    */

   cout<<"before "<<i<<endl;
   cout<<"before "<<p<<endl;
   cout<<"before "<<q<<endl;
   update(q);
   cout<<"after "<<i<<endl;
   cout<<"after "<<p<<endl;
   cout<<"after "<<q<<endl;


    
}