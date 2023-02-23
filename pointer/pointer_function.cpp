#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
    
}

void update(int *p){
  //  p = p + 1; addres update  hoga
  //  cout<< p<<endl;
  (*p)++;

}
int getsum(int arr[],int n){
   
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
     sum += arr[i];   
    }
    return sum;
    
}


int main(){
    /*int value = 5;
    int *p = &value;

   // print(p);
   //cout<<"before "<<p<<endl;
   cout<<"before "<<*p<<endl;
   update(p);
  // cout<<"after "<<p<<endl;//address update nhi hoga
   cout<<"after "<<*p<<endl;//value upadte hogi
   */
  int arr[5]={1,2,5,9,7}; 

  cout<<"sum of last three element "<<getsum(arr+2,3);// yaha pr only arr ka adress pass hota he
}