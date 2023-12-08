#include <iostream>
using namespace std;
int main(){
    int m = 6, n = 5;
    int k, sum = 0;    
    cout << "Please Kuralai, Enter array arr:" << endl;
    double arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int min = 5000;
    int minkol=-1;
    for (int j = 0; j < n;j++){
        for (int i = 0; i < m;++i){
            sum += arr[i][j];
        }
        if(sum<min){
            min = sum;
            minkol = j;
        }
        sum = 0;
    }
    cout <<"Min sum of column number = "<< minkol+1<<endl;
    cout << "Min sum of coloum = " << min;
    return 0;
}