#include<iostream>
#include<string>
using namespace std;
char getchar(char s){
    if(s >= 'a'&& s <= 'z'){
        return s;
    }else{
        s=s-'A'+'a';
        return s;
    }
}

bool validChar(char s){
    if((s>='a'&&s<='z')||(s>='A'&& s<='Z')||(s>='0' && s<='9'))
    {
     return true;
    }else{
      return false;
    }
}




bool checkPalindrome(string s)
{
    int str=0;
    int e=s.length()-1;
    while(str<=e){
        if(!validChar(s[str])){
            str++;
        }else if(!validChar(s[e])){
            e--;
        }else{
            if(getchar(s[str])!=getchar(s[e])){
            return 0;
        }else{
                str++;
                 e--;  
                
            }
        }
        
        
        
        
        
    }
    
    return 1;
}
int main(){
    string s;
    cout<<"enter the string ";
    cin>>s;

    if(checkPalindrome(s)){
        cout<<"yes,it is a palindrome string"<<endl;
    }else{
        cout<<"no,it is not a palindrome string"<<endl;
    }

}