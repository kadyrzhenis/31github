#include <iostream>
using namespace std;
int main(){
    int n, m,col,row;
    cout << "Please , Enter n row number and n column number" << endl;
    cin >> m >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int min = 1000000;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << min << endl;
    cout << "New Array Y:" << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            if(i==row || j==col){
                arr[i][j] = 0;
            }
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

}