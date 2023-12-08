#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, c = 5;
    cout << "Please , Enter n row number and n column number" << endl;
    cin >> m >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    vector<int> B;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++){
       if(arr[i][0]>c){
           B.push_back(arr[i][0]);
       }
       else{
           B.push_back(0);
       }
    }
    cout << "New Array B:" << endl;
    for (int i = 0; i < B.size();++i){
        cout << B[i] << " ";
    }
}