#include<iostream>
#include<string>
#include<vector>
using namespace std;

string replaceSpaces(string &str){

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==' '){

            str.replace(i,1,"@40");

        }
        
    }
    
    
   
   
         return str;
    }
    
   

    


int main(){
    
   

    string S;
    getline(cin,S);


    cout<<replaceSpaces(S);

}