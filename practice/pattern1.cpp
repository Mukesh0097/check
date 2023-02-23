  #include<iostream>
  using namespace std;

  int main(){
    int n;
    cin>>n;

    int i=1;
    
    while (i<=n)
    {
       int space=n-i;
       while (space)
       {
        cout<<" ";
        space--;
       }
       int j=1;
       while (j<=i)
       {
        cout<<j;
        j++;

       }

       int end1=i-1;
       while(end1){
        cout<<end1;
        end1--;
        
       }
       cout<<endl;
       i++;

       
       

      
    }
    
    
  }