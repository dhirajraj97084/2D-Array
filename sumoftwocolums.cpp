#include <iostream>
using namespace std;

int main()
{

    int arr[4][3] = {{3, 2, 6}, {9, 2, 5}, {6, 1, 7}, {4, 3, 9}};
    cout << "My  Matrix Is :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << endl;
        cout << i << " th sum of row wise : " << sum<<endl;
    }
    cout << "maximum sum of element is :";
    int maxi = INT8_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (maxi < sum)
        {
            maxi = sum;
            rowIndex=i;
        }
        cout << endl;
    }
    cout<< "maximum sum " <<rowIndex << " th row";

    return 0;
}