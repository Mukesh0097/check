   #include<iostream>
   #include<algorithm>
   #include<vector>

   using namespace std;
   int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6--> "<<binary_search(v.begin(),v.end(),6)<<endl;
     //upper and lower bound will learn in future
     cout<<"lower bound--> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
     cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
      int a=3;
      int b=-8;
      cout<<" max--> "<<max(a,b)<<endl;
      cout<<" min --> "<<min(a,b)<<endl;
      swap(a,b);
      cout<<a<<endl;

      string abcd="abcd";
      reverse(abcd.begin(),abcd.end());
      cout<<"string--> "<<abcd<<endl;
       
       rotate(v.begin(),v.begin()+1,v.end()); 
       cout<<"after rotate"<<endl;
       for(int i:v){
        cout<<i<<" ";
       } cout<<endl;

       sort(v.begin(),v.end());
       cout<<"after sorting vector"<<endl;
       for(int i:v){
        cout<<i<<" ";

       }cout<<endl;

     

   }