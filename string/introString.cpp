#include<iostream>
using namespace std;

int main(){
    char name[20];
    cout<<" enter your name: ";

    cin>>name;
    cout<<" your name is "<<name<<endl;

    name[3] = '\0';
    cout<<name;

    

}