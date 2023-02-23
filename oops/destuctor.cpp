#include<iostream>
using namespace std;

 class hero{
    //property
    //if no property exist the size of object will 1 byte
    private://under this modifier property can be used in class
    int health;

    public:// this property can access out of class

    char level;
    static int timetocomplete;


    hero(){
        cout<<"constructor called "<<endl;
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
        cout<<"copy constructor"<<endl;
        this->health = temp.health; 
        this->level = temp.level; 
    }

    void print(){

        cout<<"health "<<this->health<<endl;       
        cout<<"level "<<this->level<<endl;       
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

    //static function
    static int random(){
        return timetocomplete;
    }
    //destructor
    ~hero(){
        cout<<"destructor bhai called "<<endl;
    }
    
     

};
int hero::timetocomplete = 10;

int main(){
    // //static function called

    // cout<<hero::random()<<endl;
    
    
    
    
    
    
    
    
    
    // // static datamember
    // cout<<hero::timetocomplete<<endl;// to access static datamember
    // //here no need of making object to access it

    // //but you can also access by object
    // hero a;
    // cout<<a.timetocomplete<<endl;

    // hero b;
    // b.timetocomplete = 20;
    // cout<<a.timetocomplete<<endl;
    // cout<<b.timetocomplete<<endl;


















    // static allowcation me destructor automatically called hota he
    hero A;

    //dynamic allowcation me destructor automatically nhi called hota he
    hero *B = new hero();
    delete B;

    return 0;
}