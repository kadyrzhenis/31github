#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n, res = 0,rad=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;++i){
        for (int j = 0; j < 3;++j){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;++i){
        for (int j = i+1; j < n;++j){
            res = pow((arr[i][0] - arr[j][0]), 2) + pow((arr[i][1] - arr[j][1]), 2);
            rad = pow(arr[i][2] + arr[j][2], 2);
            if(res==rad){
                cout << i + 1 << " " << j + 1 << endl;
            }
            rad = 0;
            res = 0;
    }
    }
    cout << endl;
    return 0;
}