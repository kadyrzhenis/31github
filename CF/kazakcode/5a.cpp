#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{
    int n;
    cin >> n;
    string res = "1";
    for (int i = 0; i < n; i++)
    {
        res += "0";
    }
    if (n == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << res << endl;
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