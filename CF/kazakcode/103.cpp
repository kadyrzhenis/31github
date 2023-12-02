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
    while(cin>>k){
        v.push_back(k);
    }
    if(v[0]==0){
        cout<<0;
        return;
    }
    vector<int>up;
    vector<int>down;
    int u=0,d=0;
    for(int i=1;i<v.size();++i){
        if(v[i]!=0){
          if(v[i]>v[i-1]){
             u++;
             down.push_back(d);
             d=0;
          }else if(v[i]<v[i-1]){
              d++;
              up.push_back(u);
              u=0;
          }else{
              down.push_back(d);
             d=0;
             up.push_back(u);
              u=0;
          }
        }else{
            break;
        }
    }
    int mx=INT_MIN;
    int mx2=INT_MAX;
    for(auto n:up){
        mx=max(mx,n);
    }
    for(auto n:down){
        mx2=max(mx2,n);
    }
    cout<<min(mx2,mx);
    
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}