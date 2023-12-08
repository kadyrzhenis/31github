#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Please Abdukanat, Enter n row number and n column number" << endl;
    cin >> n;
    cout << "Please Abdukanat, Enter array arr:" << endl;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "New Array:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}