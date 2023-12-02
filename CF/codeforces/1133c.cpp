#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, res = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0, j = 0; i < n; ++i)
    {
        while (arr[i] - arr[j] > 5)
        {
            j++;
        }
        res = max(res, i - j + 1);
    }
    cout << res;
    return 0;
}