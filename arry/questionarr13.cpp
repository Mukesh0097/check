#include<iostream>
#include<vector>
using namespace std;
//find right index amd left index of repitive number

int right(vector <int>arr,int n,int key){

  int s=0;
  int end = n-1;
  int mid = s + (end-s)/2;
  int ans = -1;

  while (s<=end)
  {
    if(key==arr[mid]){
      ans= mid;
      end = mid - 1;

    }else if(key > arr[mid]){

      s=mid+1;


    }else{
      end= mid-1;


    }

    mid =  s + (end-s)/2;
  }
  

  return ans;



}
int left(vector <int>arr,int n,int key){

  int s=0;
  int end = n-1;
  int mid = s + (end-s)/2;
  int ans = -1;

  while (s<=end)
  {
    if(key==arr[mid]){
      ans= mid;
      s = mid + 1;

    }else if(key > arr[mid]){

      s=mid+1;


    }else{
      end= mid-1;


    }

    mid =  s + (end-s)/2;
  }
  

  return ans;



}

pair<int,int>  outPut(vector <int>arr,int n,int key){
  pair<int,int>p;
  p.first = right(arr,n,key);
  p.second = left(arr,n,key);

  return p;

}


int main(){
  vector <int> arr={2,3,4,4,4,5,6};

pair <int,int> save =  outPut(arr,7,4);

  cout<<save.first<<" ";
  cout<<save.second<<" "<<endl;

  cout<<"total numbre of occurance of  key--> "<<left(arr,7,4)-right(arr,7,4)+1;



  }

