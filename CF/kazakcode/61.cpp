#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    long long a,b;
    cin >> a;
    set<int> st;
    for(ll i=0;i<a;++i){
        ll k;
        cin>>k;
        st.insert(k);
    }
    cout<<st.size()<<endl;
    
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}