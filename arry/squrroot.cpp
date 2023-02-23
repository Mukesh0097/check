#include<iostream>
using namespace std;

long long int binarysearch(int n){
    int s = 0;
    int e =n;
   long long int mid = s+(e-s)/2;
   int ans =-1;

   while (s<=e)
   {
     long long squar=mid*mid;
     if(squar==n){
        return mid;

     }else if(squar<n){
        ans = mid;
        s= mid+1;

     }   else{
        e = mid-1;
     }
     mid =  s+(e-s)/2;
     
     }
   return ans;

}

double getPrecisious(int n, int temp,int preci){
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < preci; i++)
    {
       factor = factor/10;
       for (double j = ans; j*j<n; j= j+factor)
       {
        ans = j;
       }
       
    }
    return ans;
    
}

int main(){
    int n;
    cout<<"enter the value "<<endl;
    cin>>n;

    int temp = binarysearch(n);

    cout<<"squarroot of your number  "<<getPrecisious(n,temp,10);
   

}