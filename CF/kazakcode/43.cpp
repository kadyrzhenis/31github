#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()        ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    ll a,b;
    cin >> a>>b;
    if(a==0 && b==0){
        cout<<"-1"<<endl;
    }else if(a==0 || b==0){
        cout<<0<<endl;
    }
    else if(a==b){
        cout<<1<<endl;
    }else{
        ll c = __gcd(a,b);
        a=a/c;
        b=b/c;
        if(a<b){
            cout << a<<"/"<<b<< '\n';
        }else{
            cout << b<<"/"<<a<< '\n';
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