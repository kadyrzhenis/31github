#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, r, x, y, k;
    std::cin >> l >> r >> x >> y >> k;
    long long int a = r;
    long long int b = x;
    bool f = false;
    while ((a <= r && a >= l) && (b <= y && b >= x))
    {
        if ((b * k) >= l && (b * k) <= r)
        {
            f = true;
            break;
        }
        b++;
    }
    if (f)
    {
        std::cout << "YES" << endl;
    }
    else
    {
        std::cout << "NO" << endl;
    }
}