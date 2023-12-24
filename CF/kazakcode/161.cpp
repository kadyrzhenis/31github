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
            res[j][i]=arr[i][j];
        }
    }
    int rs=0;
    for(int i=0;i<n;++i){
        int cnt=0;
        int k=0;
        for(int j=0;j<n;++j){
            int ch = arr[i][j];
            if(k<n && k!=j){
               if(ch<=arr[i][k] && ch>=res[i][k]){
                k++;
            }else{
                cnt++;
                break;
            }
            }
             if(cnt==0){
           rs++;
        }
            
        }
    }
    cout<<rs<<endl;
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}