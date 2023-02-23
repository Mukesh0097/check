#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int getMin(int arry[],int size){
    int min=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        //mini=min(mini,num[i])

        if(arry[i]<min){
            min=arry[i];

        }
    }
    
return min;

}

int getMax(int arry[],int size){
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        //maxi=max(max,num[])
        if(arry[i]>max){
            max=arry[i];

        }
    }
    
return max;

}

int main(){
    int size;
    cin>>size;
    int num[100];

    for (int  i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"maximum value of arry -->"<<getMax(num,size)<<endl;

    cout<<"minimum value of arry -->"<<getMin(num,size)<<endl;

}