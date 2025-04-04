
#include <iostream>
using namespace std;


int main() {
    int row,col;
    cout<<"Enter the number of row in 2D array :"<<endl;
    cin>>row;
    cout<<"Enter the number of colums in 2D array :"<<endl;
    cin>>col;
    int arr[row][col];
    cout<<"Enter the Elements in the matrix :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
     cout<<"My  matrix  is :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Colums wise sum :"<<endl;
    int sum=0;
   for(int j=0;j<col;j++){    
       for(int i=0;i<row;i++){
           sum=sum+arr[i][j];
       }
       cout<<endl;
   }
   cout<<"sum is:"<<sum;
    return 0;
}