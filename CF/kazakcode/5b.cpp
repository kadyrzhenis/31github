#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{
    int n, m;
    cin >> n >> m;
    long long res = 1;
    int index = n - m;
    for (int i = index + 1; i <= n; i++)
    {
        res = res * i;
    }

    cout << res << endl;
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}