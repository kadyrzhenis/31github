#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m = 4, n = 5;
    int sum = 0;
    vector<int> D;
    cout << "Please , Enter array arr:" << endl;
    double arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;++j){
            sum += arr[i][j];
        }
        D.push_back(sum);
        sum = 0;
    }

    
    for (int i = 0; i < D.size();++i){
        cout << D[i] << " ";
    }
        return 0;
}
