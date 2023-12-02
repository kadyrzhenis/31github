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
    int l=0,r=n-1;
    int s=0,let=0,cnt=0;
    while(l-1<r){
       if(arr[l]>arr[r]){
           if(cnt%2==0){
             s+=arr[l];
           }else{
               let+=arr[l];
           }
           cnt++;
           l++;
       }else{
           if(cnt%2==0){
             s+=arr[r];
           }else{
            let+=arr[r];
           }
           cnt++;
           r--;
       }
    }
    cout << s<<" "<<let;
    return 0;
}