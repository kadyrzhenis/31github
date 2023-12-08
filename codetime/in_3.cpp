#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin >> n;
    int arr[101];
    int dp[101];
    for (int i = 1; i <= n;++i){
        cin >> arr[i];
    }
        sort(arr, arr + n);
        dp[2] = arr[2] - arr[1];
        dp[3] = arr[3] - arr[1];
    for(int i = 4; i <= n; i++){
      dp[i] = min(dp[i-1],dp[i-2]) + arr[i] - arr[i-1];
    }
    cout << dp[n-1];
    return 0;
    }
