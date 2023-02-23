#include<iostream>
#include<string>
using namespace std;

char getMaxOccrChar(string s){
    int arr[26]={0};
    for (int i = 0;  i < s.length();  i++)
    {
       int ch = s[i];
       int number =0;
       //only for lowercase
       if (ch>='a'&& ch<='z')
       {
          number = ch-'a';
       }

       arr[number]++;


       
    }

    int maxi = -1;
    int ans =0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi<arr[i]){

            ans = i;
            maxi = arr[i];
        }
    }
   
   
    char finalAns=ans+'a';
    return finalAns;
    
    
}

int main(){

    string S;
    cout<<"enter the string ";
    cin>>S;
    cout<<getMaxOccrChar(S);



    

}