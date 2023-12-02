#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n;
    int arr[n];
    int mx = 0, mn = n + 1, sumLeft = 0, sumRight = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    sumLeft += arr[i];
    sumRight += arr[j];
    while (i < j)
    {

        if (sumLeft == sumRight)
        {
            i++;
            j--;
            mx = max(mx, sumRight);
            sumLeft += arr[i];
            sumRight += arr[j];
        }
        else if (sumRight > sumLeft)
        {
            i++;
            sumLeft += arr[i];
        }
        else
        {
            j--;
            sumRight += arr[j];
        }
    }
    cout << mx;
    return 0;
}