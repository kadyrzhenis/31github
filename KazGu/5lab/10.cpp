#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Please , Enter n row number and m column number" << endl;
    cin >> m >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "New Array:" << endl;
    for (int i = m-1; i >= 0; i--){
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}