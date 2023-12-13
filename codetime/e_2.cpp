#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[213344], b[213344];
int main()
{
    ll n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    b[0] = a[0];
    for (int i = 1; i < n; i++)
        b[i] = b[i - 1] + a[i];
    while (m--)
    {
        cin >> x >> y;
        x--, y--;
        if ((b[y] - b[x - 1]) % 2 != 0)
            puts("Nao");
        else
            puts("Sim");
    }
}