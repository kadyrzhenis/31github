#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    int j = 0;
    long long sum = 0;
    long long ans = 0;
    for(int i = 0; i < v.size() - 2; ++i){
        while(j <= i + 2){
            sum += v[j];
            j++;
        }
        while(j < v.size() && v[i] + v[i + 1] > v[j]){
            sum += v[j];
            j++;
        }

        if(v[i] + v[i + 1] > v[j - 1]){
            ans = max(ans, sum);
        }
        sum -= v[i];
    }
    cout << ans << endl;
    return 0;
}