#include<iostream>
#include<vector>
using namespace std;

 vector<int> printWave(vector<vector<int>>arr,int mRows,int nCols){
    vector<int>ans;
    for (int i = 0; i <nCols; i++)
    {
        if (i%2!=0)
        {
            for (int j = mRows-1; j>=0; j--)
            {
                ans.push_back(arr[j][i]);
            }
            
        }else{
            for (int j = 0; j < mRows; j++)
            {
                ans.push_back(arr[j][i]);
            }
            
        }
        
    }

    return ans;
    

}

int main(){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};

    int row = 3;
    int col = 3;

    vector<int> brr = printWave(arr,row,col);

    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }

    return 0;
    

    

}