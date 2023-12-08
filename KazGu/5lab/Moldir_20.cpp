#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cout << "Please Moldir, Enter n row number and n column number" << endl;
    cin >> n;
    cout << "Please Moldir, Enter array arr:" << endl;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int max = -1000;
    int mx=0;
    cout << "****************************"<<endl;
    for (int i = n/2; i < n; i++){
        for (int j = 0; j < n;j++){
            if(i+j<n-1){
                continue;
            }
            v.push_back(arr[i][j]);
            if(i==j){
                break;
            }

    
        }
    }
    for (int i = 0; i < v.size();++i){
        if(v[i]>max){
            max = v[i];
        }
    }
    cout << "Max number = " << max;
    return 0;
}