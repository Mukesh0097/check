#include<iostream>
using namespace std;

bool isEven(int num){
    if (num&1)
    {
        return 0;

    }
    return 1;
}

int main(){

    int num;
    cin>>num;

    if (isEven(num))
    {
        cout<<"even number";
    }else{
        cout<<"odd number";
    }
    


}