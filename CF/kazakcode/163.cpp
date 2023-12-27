#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
#define Do()                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{
    vector<int> v;
    int n;
    cin>>n;
    int arr[n][n],res[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=n-1;j>=0;--j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}