#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
// creating jagged arrey dynamically 
    int* number = new int[row];
    int** arr = new int*[row];

    for (int i = 0; i < row; i++)
    {
        cout<<"no of column you need row"<<i<<":";
        cin>>number[i];
        arr[i]=new int[number[i]];
    }
// taking input 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            cout<<"row "<<i<<":"<<"value"<<j<<":";
           cin>>arr[i][j];
        }
        
    }

    // printing array
    cout<<"printing jagged array!!!"<<endl;
    cout<<"so scnz kuch aise he!!"<<endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < number[i]; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}

//realiesing memory
for (int i = 0; i < row; i++)
{
    delete []arr[i];
}
delete []arr;
delete []number;


    
    


}