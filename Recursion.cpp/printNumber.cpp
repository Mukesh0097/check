#include<iostream>
using namespace std;
void print(int n){
    //base condition
   if(n==0) 
        return ;
        /*
    cout<<n<<endl;//tail recursion type


    //recursive relation 
    print(n-1);    */
    print(n-1);

    cout<<n<<endl;

    
}

int main(){
    int n;
    cin>>n;

    print(n);
}