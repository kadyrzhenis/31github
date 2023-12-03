#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    long long a,b,c,d;
    cin >> a>>b;
    cin >>c>>d;
    ll k = max(a,b)*max(c,d)-min(a,b)*min(c,d);
    ll m = a+b+c+d;
    if(k==0){
        cout<<"-1"<<endl;
    }else{
        if(m%k==0){
            cout<<m/k<<endl;
        }else{
            cout<<(m/k) + 1<<endl;
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