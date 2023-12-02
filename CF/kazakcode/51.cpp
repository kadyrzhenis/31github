#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    long long a,b;
    cin >> a>>b;
    ll c = ceil(a*1.0/b);
    cout<<c*b-a<<'\n';
    
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}