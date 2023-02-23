#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;

    }
    return count;
}


void getReverse(char name[],int l){
    int s=0;
    int e=l-1;
   
   
    
    while (s<e)
    {
        swap(name[s++],name[e--]);
        
    }

}






int main(){
    char  name[20];
    cout<<"enter your name: ";
    cin>>name;
    int l=getLength(name);
    getReverse(name,l);
    cout<<name;

    return 0;
    
}