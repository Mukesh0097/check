#include<iostream>
using namespace std;

void update(int& j){
    j++;
}





int main(){
    /*
    int i = 5;
    //create a ref variable

    int &j = i;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */
   int n = 9;
   cout<<"before "<<n<<endl;
   update(n);//pass by refrence value
   cout<<"after "<<n<<endl;
 



}