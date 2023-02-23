#include<iostream>
using namespace std;

class hero{
    //property
    //if no property exist the size of object will 1 byte
    private://under this modifier property can be used in class
    int health;

    public:// this property can access out of class

    char level;

    void print(){
        cout<<health<<endl;
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

int main(){
    //create a object
    hero ramesh;//to access property and behavior of class use "."operator

    ramesh.level = 'A';
    char val = ramesh.level;
    cout<<"value of level property "<<val<<endl;

    ramesh.setHealth(60);//here you can set private property

   cout<<"value of private property "<< ramesh.getHealth()<<endl;//60 milna chahiye and get the private property value;



    // cout<<"size of h1 object "<<sizeof(h1)<<endl;
    }
 