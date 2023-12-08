#include <iostream>
using namespace std;
int main(){
    int m = 4, n = 5, c = 10;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "New Array D:" << endl;
    for (int i =0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]*c<<" ";
        }
        cout << endl;
    }


    return 0;
}