#include<iostream>
using namespace std;

class human{
    private:
    int age;
    public:
    int height;
    int weight;
    

    public:
    int getAge(){
        return this->age;

    }
    void setweight(int w){
        this->weight = w;
    }
};

class male:private human{
    public:   
    string color;

    void sleep(){
        cout<<"kaa babu soyt ho "<<endl;
    }

    
};


int main(){
    human ans;
    male object1;

    cout<<ans.getAge()<<endl;










    /*
    male hand;
   cout<<hand.age<<endl;
   cout<<hand.color<<endl;
   cout<<hand.height<<endl;
   cout<<hand.weight<<endl;

   hand.setweight(89);
   cout<<hand.weight<<endl;
   hand.sleep();
   */



}