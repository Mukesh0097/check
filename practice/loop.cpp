#include<iostream>

using namespace std;

int main(){
   int n; 
   cin >> n ;
/*
   int i=1;
    int sum = 0;


   while (i<=n)
   {
    sum+=i;
    i+=1;
   }
   cout<<"sum of your n number is:>---"<<sum;
   
  int i=1;
  int sum=0;

  while ( i<=n )
  {
   if(i%2==0){
    sum=sum+i;
   }
   i++;

  }
  cout<<"sum of even number >---"<<sum;
  int i=2;

  while (i<n)
  {
    if (n%i==0)
    {
        cout<<"not prime";
    }
    
    i+=1;

  }
  cout<<"not prime";
  int i=1;
  int sum=1;
  while (i<=n)
  {
    int j =1;
    
    while (j<=n)
    {
      
      cout<<sum<<" ";
      sum =sum+1;
      j++;
    }
    cout<<endl;
    
    i++;
    
  }
  int i=1;
  
 
  while (i<=n)
  {
    int j=1;
   
    
    while (j<=i)
    {
    char ch ='A'+(n-i+j-1);
      cout<<ch<<" ";
      
       
     
      
      
      j++;
    }
    cout<<endl;
   
    i++;
  }*/
  //another method for above question
  int i=1;
  while (i<=n)
  {
    int j=1;
    char start ='A'+n-i;
    while (j<=i)
    {
      cout<<start<<" ";
      start+=1;
      j++;

    }
    cout<<endl;
    i++;
  }
  
  
  
  

  
  


}