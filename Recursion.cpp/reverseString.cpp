#include<iostream>
using namespace std;

void reverse(string& name,int i){
    
    if(i>(name.length()-i-1))
        return ;

   if(i==0 && (name.length()-i-1)==0)
        return;
    
    swap(name[i],name[name.length() - i - 1]);
    i++;
    reverse(name,i);


}

int main(){
    string name;
    cin>>name;

    
    
    reverse(name,0);
    cout<<name<<endl;

}