#include <iostream>
using namespace std;
int main(){
    int n, row, sum = 0;
    cout << "Please , Enter n row number and n column number" << endl;
    cin >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int min = 1000000;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
                row = i;
            }
        }
    }
    cout << min << endl;
    for (int i = 0; i < n; i++){
        sum += arr[row][i];
    }
    cout << sum;

}