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
    int n,m;
    cin>>n>>m;
    char arr[n][m],res[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(j%2==1){
                res[i][j]=arr[n-i-1][j];
            }else{
                res[i][j]=arr[i][j];
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<res[i][j];
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