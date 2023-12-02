#include <bits/stdc++.h>

using namespace std;

void solve(){
    int m;
    cin>>m;
    int arr[m];
    vector<int>v;
    for(int i=0;i<m;++i){
        cin>>arr[i];
    }
    int l=0,r=m-1;
    while(l<r){
        v.push_back(arr[l]);
        v.push_back(arr[r]);
        l++;
        r--;
    }
    if(m%2==1){
        v.push_back(arr[l]);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, res = 0;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}