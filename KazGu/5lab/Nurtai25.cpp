#include <iostream>
using namespace std;
int main(){
    int m, n;
    int k, sum = 0;
    cout << "Please Nurtai, Enter n row number and m column number" << endl;
    cin >> m >> n;
    cin >> k;
    cout << "Please Nurtai, Enter array arr:" << endl;
    double arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        double max = -10e9;
        for (int j = 0; j < n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        cout << "max number row " << i << " = " << max<<endl;
       
    }
    for (int j = 0; j < n; j++){
       int kol = 0;
        for (int i = 0; i < m;i++){
            if(arr[i][j]<k){
                kol++;
            }
        }
        cout << "The number of elements less than the threshold k in column " << j << " = " << kol << endl;
    }

    return 0;
}