
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of row in 2D array :" << endl;
    cin >> row;
    cout << "Enter the number of colums in 2D array :" << endl;
    cin >> col;
    int arr[row][col];
    cout << "Enter the Elements in the matrix :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "My  matrix  is :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int target;
    cout << "Enter the Element to find in the 2D array:";
    cin >> target;
    bool fount=false;
    
    bool found=false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (arr[i][j]==target)
           {
            found= true;
            break;
           }                     
        }        
    }
    if(found=true){
       cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}