#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Do()        ios_base::sync_with_stdio(false); cin.tie(0);
const ll INF = 1e18;
const int N = 1e5 + 7;
const ll MOD = 1e12 + 7;
const int B = 320;
const ll R = 1e9 + 5;
void solve()
{
    long long a,b,d;
    cin >> a>>b;
    if(b==0){
        cout<<-1<<endl;
    }else if(a==0 || a%b==0){
        cout<<0<<endl;
    }else{
       long double c = (a*1.0)/b;
       d=(ll)(c*10000);
       if(d%10==0){
           cout<<setprecision(1)<<(a%b*1.0)/b;
       }else{
         cout<<setprecision(4)<<(a%b*1.0)/b;
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