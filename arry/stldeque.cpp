#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque <int> d;
    d.push_back(1);
    d.push_front(2);

    //d.pop_back();
   // d.pop_front();

   cout<<"print first index element "<<d.at(0)<<endl;
   cout<<"first "<<d.front()<<endl;
   cout<<"last "<<d.back()<<endl;

   cout<<"empty or not "<<d.empty()<<endl;
   cout<<"before erase "<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);
   cout<<"after erase "<<d.size()<<endl;

   for(int i:d){
    cout<<i<<endl;  
     }

    
}