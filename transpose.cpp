
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
    int transpose[col][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}