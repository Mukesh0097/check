#include<iostream>
#include "hero.cpp"
using namespace std;


int main (){
    //static allocation
    hero a;
    a.setLevel('A');
    a.setHealth(80);
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //dynamically allocation

    hero *b = new hero(45);
  // ( *b).setHealth(90);
  //  b->setHealth(100);//another method to set
  //  b->setLevel('S');

//    cout<<"health of b is "<<(*b).getHealth()<<endl;
//    cout<<"level of b is "<<(*b).getLevel()<<endl;

cout<<"health of b is "<<b->getHealth()<<endl;
//cout<<"level of b is "<<b->getLevel()<<endl;
     
   



}