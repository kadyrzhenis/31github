#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    long long a,b,jup=0,taq=0;
    cin >> a;
    map<int,int>mp;
    for(ll i=0;i<a;++i){
        ll k;
        cin>>k;
        mp[k]++;
    }
    int mx=-1;
    for(auto m:mp){
        mx=max(mx,m.second);
    }
    for(auto m:mp){
        if(mx==m.second){
           cout<<m.first<<endl;
           break;
        }
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