#include <iostream>
using namespace std;
int main(){
    int n;
    int max = -100000;
    int sum = 0;
    cout << "Please , Enter n row number and n column number" << endl;
    cin >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 2;j++)
        {
            sum += arr[i][j];
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout << "Summa array(n-2*n-2) = " <<sum<< endl;
    cout << "max element in array(n-2*n-2) = " << max;

    return 0;
}