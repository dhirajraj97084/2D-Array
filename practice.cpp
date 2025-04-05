#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter the Number Of Row in Matrix :";
    cin>>n;
    cout<<"Enter the Number Of Colums in Matrix :";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the Elements in the Matrixes:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"My  Matrix Is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Row wise Sum of Matrix:"<<endl;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }  
                
        cout<<endl;
        cout<<sum;
    }
    
    
    
    return 0;
}