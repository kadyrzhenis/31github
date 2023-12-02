#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
#define Do()        ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    vector<int>v;
    int k;
    cin>>k;
    for(int i=0;i<k;++i){
        int m;
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for(auto n:v){
        cout<<n<<" ";
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