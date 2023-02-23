#include<iostream>
using namespace std;
// bool isArrysorted(int arr[],int idx){
//     if(idx==4){
//         return true;

//     }
        
//     return isArrysorted(arr,idx+1) & arr[idx]<=arr[idx+1];



// }

// int main(){
//    int arr[5] ={1,4,8,10,15};

//    if (isArrysorted(arr,0))
//    {
//     cout<<"yes"<<endl;
//    }else{
//     cout<<"no"<<endl;
//    }
   
// }
bool isarrySorted(int arr[],int size){
    if(size==0 ||size == 1)
        return true;
    if(arr[0] > arr[1])
        return false;
    else{
        bool ans = isarrySorted(arr+1,size-1);
        return ans;
    }
}

int main(){
    int arr[]={1,5,10,9,11};
    int size = sizeof(arr)/sizeof(arr[0]);//sizeof(arr)/sizeof(arr[0]);to find size of an array
    if (isarrySorted(arr,size))
    {
        cout<<"ya it is sorted"<<endl;
    }else{
        cout<<"no it is not sorted"<<endl;
    }
    

}