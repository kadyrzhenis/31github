#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve()
{
    long long n, k;
    string s;
    cin >> s;
    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}