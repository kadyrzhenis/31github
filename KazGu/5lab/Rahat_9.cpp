#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Please Rahat, Enter n row number and m column number" << endl;
    cin >> m >> n;
    cout << "Please Rahat, Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "New Array:" << endl;
    for (int i = 0; i < m; ++i){
        for (int j = n-1; j >=0; j--)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}