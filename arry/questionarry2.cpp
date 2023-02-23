#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }


        
    }
    return 0;
    
}

int main(){

    int linear[10]={1,22,3,-2,-5 ,7, 8 ,9 ,4, 5 };

    int key;
    cout<<"enter the value"<<endl;
    cin>>key;
bool ans=search(linear,10,key);
if (ans)
{
   cout<<"key present";

}
else{
    cout<<"key not present";
}


}