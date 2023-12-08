#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n;++i){
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size()-1;++i){
        sum += v[i];
    }
    cout << sum;
    return 0;
}