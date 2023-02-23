 #include<iostream>
 #include<vector>
 #include<string>

 using namespace std;

 int main(){
    int arr[5] = {1,2,3};
    char ch[] ="abcd";
    
    cout<<arr<<endl;//here implimentation of char array and int array are differnt
    cout<<ch<<endl;
    /*
    vector<char>path{'a','b'};

    for ( auto i : path)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    string str;
    for (int i = 0; ch[i]!='\0'; i++)
    {
       str.push_back(ch[i]);
    }
    
    
    cout<<str<<endl;*/
    char *c = &ch[0];
    //c = c+1) =(*c=*c + 1)
    *c = *c+1;
    cout<<*c<<endl;
    //cout<<c<<endl;//isk hisab se address of ch[0] address print hona chahiye but nhi hua print hua pura array

    char temp = 'z';

    char *p = &temp;
    cout<<p<<endl;// a se shuru phir garbage value print karenga



    

   



     }