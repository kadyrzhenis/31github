#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int mx = 0, mn = n + 1;
    for (int i = 0; i < m; ++i)
    {
        string s, s1;
        int x;
        cin >> s >> s >> s1 >> s >> x;
        if (s1 == "left")
        {
            mn = min(mn, x);
        }
        else
        {
            mx = max(mx, x);
        }
    }
    if (mx + 1 >= mn)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << mn - mx - 1 << '\n';
    }
    return 0;
}