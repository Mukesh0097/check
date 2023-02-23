#include<iostream>
using namespace std;


int main(){
    //create 2 d array
   // int arr[3][2] = {1,2,3,4,5,6};
   int arr[3][2];



    //taking input-->row wise
    /*for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        cin>>arr[i][j];
       }
       
    }*/
//taking input  as coloumn wise
     for (int i = 0;  i<2 ; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        cin>>arr[j][i];
       }
       
    }

    


//print coloumn wise

   for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            cout<<arr[j][i]<<"";

        }
        
    }
    

   //print row wise

   /*for (int i = 0; i <3; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }*/
   
    

}