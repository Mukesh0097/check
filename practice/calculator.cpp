#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;
    cin>>a>>b>>ch;

    switch (ch)
    {
    case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*':cout<<(a*b)<<endl;
        case '/':cout<<(a/b)<<endl;
    
   
    }
}