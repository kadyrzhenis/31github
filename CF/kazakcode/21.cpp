#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
#define Do()        ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    vector<int>v;
    int k,mx=0;
    while(cin>>k){
        v.push_back(k);
        if(k==0){
            break;
        }
    }
    if(v[0]==0){
        cout<<0;
        return;
    }
    int cnt1=1,cnt2=1;
    int x=v[0];
    for(auto y:v){
        if(y==0){
            break;
        }
        if(x==y){
            mx=max(mx,max(cnt1,cnt2));
            cnt1=1;
            cnt2=1;
        }else if(x<y){
             cnt1++;
             mx=max(mx,cnt2);
             cnt2=1;
        }else{
            cnt2++;
            mx=max(mx,cnt1);
            cnt1=1;
        }
       x=y;
    }
    mx=max(mx,max(cnt1,cnt2));
    cout<<mx;
    
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}
