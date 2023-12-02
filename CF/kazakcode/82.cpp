#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    long long a,b,c;
    cin >> a>>b>>c;
    ll k = a/b;
    if(a%b==0){
        cout<<k*c<<endl;
    }else{
        cout<<(k+1)*c<<endl;
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