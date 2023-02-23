#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"source "<<src<<" "<<"destinattion "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pahuch gya"<<endl;
        return ;
    }

    src++;
    //recursive relation
    reachHome(src,dest);



}

int main(){
    int src = 1;
    int dest = 10;


    reachHome(src,dest);
}