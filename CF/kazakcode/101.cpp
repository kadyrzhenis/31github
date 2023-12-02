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
    int mn=100000000;
    while(cin>>k){
       if(k!=0){
           v.push_back(k);
          mn = min(mn,k);
       }else{
           break;
       }
    }
    if(mn==100000000){
        cout<<-1<<endl;
    }else{
      cout<<mn<<endl;
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