#include<iostream>
using namespace std;
inline int getmin(int& a,int& b){
     //inline fuction only execute when line code is only 1 line
    return (a<b)?a:b;

}

int main(){
    int a = 1, b = 3;

    int ans = getmin(a,b);
    cout<<ans<<endl;
     
     a = a + 2;
     b = b + 1;
     
    ans = getmin(a,b);
    cout<<ans<<endl;
}