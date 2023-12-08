#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n=10,s=10000;
    int arr[10];
    vector<int> v;
    vector<int> res;
    for (int i = 0; i < n;++i){
        cin >> arr[i];
        if(arr[i]==2){
            v.push_back(i);
        }
    }
    for(int i=0;i<n;++i){
        if(arr[i]==1){

            for (int j = 0; j < v.size();++j){
                s = min(abs(v[j] - i),s);
            }
            res.push_back(s);
            s = 100000;
        }
    }
    int mx = -1000000;
    for (int i = 0; i < res.size();++i){
        mx = max(res[i], mx);
    }
    cout << mx;

    return 0;
}