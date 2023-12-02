#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    long long s,x,y;
    cin >> s>>x>>y;
    if(y>x){
        cout<<-1<<endl;
    }else if(x==y && s==0){
        cout<<0<<endl;
    }else if(x==y && s!=0){
        cout<<-1<<endl;
    }
    else{
        ll res=x-y;
        if(s%res==0){
            ll ans = s/res;
            cout<<ans<<endl;
        }else{
            ll ans =s/res;
            cout<<ans+1<<endl;
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