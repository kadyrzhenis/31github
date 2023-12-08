#include <iostream>
using namespace std;
int main(){
    int m, n;
    int k, sum = 0;
    cout << "Please Kuralai, Enter n row number and m column number" << endl;
    cin >> m >> n;
    cout << "Please Kuralai, Enter array arr:" << endl;
    double arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < n;j++){
        for (int i = 0; i < m;++i){
            sum += arr[i][j];
        }
        cout << "sum of column " <<j<<" = "<< sum << endl;
        sum = 0;
    }

        return 0;
}
