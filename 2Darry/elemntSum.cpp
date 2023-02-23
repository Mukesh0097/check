#include<iostream>
using namespace std;


void printsum(int arr[][3],int row,int col){
    int maxi = -1;
    int ans = -1;

    for (int i = 0; i < row; i++)
    {  
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum  += arr[i][j];
        }
        if (maxi<sum)
        {
            ans = i;
            maxi = sum;
        }
    }
    cout<<" largest row sum is in row "<<ans<<endl;
    cout<<" largest row sum is "<<maxi;
}


int main(){

    int arr[4][3];


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cin>>arr[i][j];
        
        }
        
    }

   printsum(arr,4,3);

}
