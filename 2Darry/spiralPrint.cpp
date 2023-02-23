#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> &matrix){
    vector<int> temp ;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingCol = col-1;
    int endingRow = row -1;

    while (count<total)
    {
        //printing first row 

        for (int i = startingCol; count<total && i <= endingCol; i++)
        {
            temp.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        //print end col

        for (int i = startingRow; count<total && i <= endingRow; i++)
        {
            temp.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        //print end row

         for (int i = endingCol; count<total && i >= startingCol; i--)
        {
            temp.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
    //print firt col

        for (int i = endingRow; count<total && i >= startingRow; i--)
        {
            temp.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;


        

    }
    return temp;
}

int main(){
    vector<vector<int>> matrix =  {{1,2,3,7,8},{5,6,7,8,9},{6,7,8,9,4},{9,4,7,5,3}};
    
    vector <int> ans = spiralPrint(matrix);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    
    

}