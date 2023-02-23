#include<iostream>
using namespace std;
void merge(int*arr,int s,int e){
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
    
    
    
   

}

void mergeSort(int* arr,int s,int e){
    int mid;
    
    if(s>=e)
        return;

     mid = (e+s)/2;

    //left part of array
    mergeSort(arr,s,mid);
    //right part of array
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}

    
        
    


int main(){
    int arr[] = {1, 20, 6, 4, 5 };
    int size = sizeof(arr)/sizeof(arr[0]);

   mergeSort(arr,0,size-1);
   for (int i = 0; i < size; i++)
   {
       cout<<arr[i]<<" ";

   }cout<<endl;
   
}