#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

// Taking input of arr RowWise.
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j];
    }
    
}   

/*
// Taking input of arr ColumnWise.
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>arr[j][i];
    }
    
}   
*/


// Printing the 2D-Array.
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}   



return 0;
}