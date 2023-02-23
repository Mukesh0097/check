#include<iostream>
using namespace std;

int global = 8;//these u can access evrey where
void a(){
    cout<<global<<endl;
}
int ans (){
    return global;
}


int main(){
   
    a();
    global++;
    cout<<global<<endl;
    cout<<ans()<<endl;

    
}