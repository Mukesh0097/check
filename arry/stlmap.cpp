#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    // m[1]="mukesh";
    // m[15]="prajapat";
    // m[9]="suresh";
    // m[5]="jitesh";
    // m.insert({8,"kamlesh"});

    for(auto i:m){

        cout<<m.first<<" "<<m.last<<endl;
    }
    cout<<"finding 13: "<<m.count(13)<<endl;

    m.erase(15);
    cout<<"after erase"<<endl;
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it =m.find(5);
    for (auto i = it; i!=m.end() ; i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    
    

}