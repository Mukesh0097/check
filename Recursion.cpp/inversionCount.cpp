#include<iostream>
using namespace std;
int merge(int*arr,int s,int e){
   int mid = (e+s)/2;
    int len1 = mid -s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int invCount = 0;


    int mainArryindex = s;

    //to copy till at midpoint
    for (int  i = 0; i < len1; i++)
    {
       first[i]= arr[mainArryindex++];
    }
    // to copy till mid to end

    
    mainArryindex = mid+1;
     for (int  i = 0; i < len2; i++)
    {
       second[i]= arr[mainArryindex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArryindex = s;
    while (index1<len1 && index2<len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArryindex++]=first[index1++];
        }else{
            arr[mainArryindex++]=second[index2++];

            invCount = invCount + (mid+1 -index1);

            
        }
        
    }

    while (index1<len1)
    {
       arr[mainArryindex++]=first[index1++];

    }

    while (index2<len2)
    {
        arr[mainArryindex++]=second[index2++];
    }
    
    
    
    return invCount;

}

int mergeSort(int* arr,int s,int e){
    int mid;
    int invCount = 0;
    if(e>s)
    {
     mid = (e+s)/2;

    //left part of array
   invCount += mergeSort(arr,s,mid);
    //right part of array
    invCount += mergeSort(arr,mid+1,e);

    invCount += merge(arr,s,e);

    }

    return invCount;
        
    
}

int main(){
    int arr[] = {1, 20, 6, 4, 5 };
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans =mergeSort(arr,0,size-1);

       cout<<ans<<endl; 
    
}