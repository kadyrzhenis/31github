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
    for(int i=1;i<v.size();i+=2){
        swap(v[i],v[i-1]);
    }
    for(auto n:v){
        cout<<n<<" ";
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