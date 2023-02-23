#include<iostream>
using namespace std;

long long int expo(int base,int power){
    if(power==0)
        return 1;
    if(power==1)
        return base;
    long long int ans = expo(base,power/2);

    if(power&1){
        return base * ans * ans;
    }else{
       return ans * ans; 

    }

}

int main(){
    int base ,power;
    cin>>base;
    cin>>power;
    

    cout<<expo(base,power)<<endl;

   


}