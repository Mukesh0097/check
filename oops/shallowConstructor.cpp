#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class hero{
    //property
    //if no property exist the size of object will 1 byte
    private://under this modifier property can be used in class
    int health;

    public:// this property can access out of class
    char *name;
    char level;

    hero(){
        
        name = new char[100];
    }
    //parameterized constructor
    hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;

    }

    hero(int health,char level){
        this->level = level;
        this -> health = health;

    }
    //copy constructor
    hero(hero& temp){
       cout<<"deep copy constructor"<<endl;
       char *ch = new char(strlen(temp.name)+1);
       strcpy(ch,temp.name);
       this->name = ch;
        this->health = temp.health; 
        this->level = temp.level; 
    }

     

    void print(){
        cout<<endl;
        cout<<"[";
        cout<<"Name: "<<this->name<<", ";
        cout<<"Health: "<<this->health<<", ";
        cout<<"level: "<<this->level<<",";
        cout<<"]";
        cout<<endl;

              
    }

    //getter
    int getHealth(){
        return health;

    }

    char getLevel(){
        return level;
    }
    //setter
    void setHealth(int h){
        health = h;

    }
    void setLevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    
    
     

};


int main(){

    hero S;
    S.setHealth(79);
    S.setLevel('B');
    char name[7] = "Mukesh";
    S.setname(name);
   // S.print();

    // use default copy constructor

    hero R(S);
   // R.print();

    //update

    S.name[0]='S';
    S.print();

     R.print();//default copy constructor doing copy constructor

     S = R;//copy assignment operators
     S.print();
     R.print();







}