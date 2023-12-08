#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Please ,Nazerke Enter n row number and n column number" << endl;
    cin >> m >> n;
    cout << "Please , Nazerke Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "New Array Y:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    

}