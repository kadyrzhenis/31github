#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{
    long long a = 0, b = 1, c = 0, res = 0, k = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0' && c != 0)
        {
            b = b * (-1L);
        }
        else if (s[i] != 0)
        {
            c++;
            res += ((s[i] - '0') * b);
        }
        else
        {
            k++;
        }
    }
    cout << res;
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}