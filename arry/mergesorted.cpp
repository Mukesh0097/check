#include<iostream>
using namespace std;

void mergesorted(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i] < arr2[j]){ 
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }

    }
    //if arr1 k elemnt remain rehte to
    while (i<n)
    {
        arr3[k]=arr1[i];
        k++;
        i++;

    }

     while (j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;

    }

    

}

void printArry(int ans[],int k){
    for (int i = 0; i < k; i++)
    {
        cout<<ans[i]<<" ";

    }cout<<endl;
    
}

int main(){
    int arr1[5]={1,2,4,5,6};
    int arr2[6]={3,7,8,9,10,11};
    int arr3[11]={0};


    mergesorted(arr1,5,arr2,6,arr3);
    printArry(arr3,11);
}
