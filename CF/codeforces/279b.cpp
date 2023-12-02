#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (auto i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int s = 0, res = 0;
    for (auto i = 0, j = 0; i < n; ++i)
    {
        s += arr[i];
        while (s > t)
        {
            s -= arr[j];
            j++;
        }
        res = max(res, i - j + 1);
    }
    cout << res;
    return 0;
}