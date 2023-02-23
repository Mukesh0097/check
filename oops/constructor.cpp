 #include<iostream>
  
 using namespace  std;
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
    
     

};

 int main(){

    hero S(80,'A');
    S.print();
    

    hero R(S);//copy constructor by default
    R.print();

















//     //called constructor by statically
//     hero construct(78);

//     cout<<"address of construct "<<&construct<<endl;
//     construct.print();//garbage value
     

//     //called constructor by dynamically


//    hero *ans = new hero(43);
//    cout<<"address of dynamic construct "<<ans<<endl;
//    ans->print();//garbagwe value

//     //parameterized constructor
//    hero temp(22,'b');
//    temp.print();



 }