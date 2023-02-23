#include<iostream>
using namespace std;

int main(){
    /* 
    int arr[10] = {15,5,9,8};

    cout<<"1st address of array "<<arr<<endl;
    cout<<arr[0]<<" it is garbage value "<<endl;
    cout<<"1st address of array in 2nd way "<<&arr[0]<<endl;
    cout<<"it gives value of 1st location "<<*arr<<endl;
    cout<<"it gives value of 1st location + add (3):"<<*arr+3<<endl;//we can do same  thing like (*arr)+3
    cout<<"it gives value of 2nd location :"<<*(arr+1)<<endl; 
    cout<<"it gives value of 2nd location :"<<*(arr+1)<<endl; 
    cout<<"8th "<<arr[2]<<endl;
    cout<<" 9th "<<*(arr+2)<<endl;
    cout<<" 10th "<<arr+2<<endl;//below is same
    cout<<" 11th "<<&arr[2]<<endl; 
    cout<<"12th "<<2[arr]<<endl;//8th and 12th both r same 
    

   int temp[10] = {8,9,4,5};
   int *p = temp;
   int *q = &temp[0];
   cout<<*p<<endl;
   cout<<*q<<endl;
   cout<<q<<endl;
   cout<<p<<endl;
   cout<<"size of temp "<<sizeof(temp)<<endl; 
   cout<<"size of pointer p "<<sizeof(p)<<endl; 
   cout<<"size of pointer q "<<sizeof(q)<<endl; 
   cout<<"size of pointer q "<<sizeof(&q)<<endl;
  
  int a[10] = {1,2,3,5};
  cout<<"->"<<&a[0]<<endl;//it gives address of first element
  int *ptr = &a[0];
  cout<<"->"<<&ptr<<endl; // it gives address of pointer   
   */
  int k[10];

//ERROR
  //k = k+1; not can changed 
  int *prt = &k[0];
  prt=prt+1;
  cout<<&k[0]<<endl;//both r same
  cout<<prt<<endl;
  cout<<&k<<endl;  

    }