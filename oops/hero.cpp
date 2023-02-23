
#include<iostream>
using namespace std;

class hero{
    //property
    //if no property exist the size of object will 1 byte
    private://under this modifier property can be used in class
    int health;

    public:// this property can access out of class

    char level;

    hero(){
        cout<<"constructor called "<<endl;
    }

    hero(int health){
        this -> health = health;

    }

    void print(){
       
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
    
     

};