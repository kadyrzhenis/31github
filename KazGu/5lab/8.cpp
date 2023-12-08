#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    int m, n;
    vector<int> v;
    cout << "Please , Enter n row number and m column number" << endl;
    cin >> m >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int min = 100000;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
        v.push_back(min);
        min = 100000;
    }
    int max;
    for (int i = 0; i < v.size();++i){
        max  = *max_element(v.begin(),v.end());
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            if(arr[i][j]==max){
                cout << "row = " << i+1 << endl;
                cout << "col = " << j+1;
            }
        }
    }
    return 0;
}