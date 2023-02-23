#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int count=3;
    int z=1;

    while(i<=n){
        int space =n-i;
        while(space){
            cout<<" ";
            space=space-1;

        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;

        }
        int end=i-1;
     while(end){

        cout<<count;
        count++;
        

        end--;
        

     }

    
     
     

    
     cout<<endl;
     i++;
    }

    while (z<=(n-1))
    {
        int sp=n+z-3;
        while (sp)
        {
            cout<<" ";
            sp--;

        }
        int k=1;
        while (k<=n-2*z+2)
        {
           cout<<k;
           k++;
        }
        cout<<endl;
        z++;
        
    }
    

    
}