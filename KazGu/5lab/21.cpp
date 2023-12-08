#include <iostream>
using namespace std;
int main(){
    int m = 2, n = 5;
    int bol, men, bol1, men1;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int max = -5000;
    int min = 5000;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
           if(arr[i][j]>max){
               max = arr[i][j];
               bol = i;
               bol1 = j;
           }if(arr[i][j]<min){
               min = arr[i][j];
               men = i;
               men1 = j;
           }
        }
    }
    cout << max << " " << min << endl;
    arr[men][men1] = max;
    arr[bol][bol1] = min;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
}