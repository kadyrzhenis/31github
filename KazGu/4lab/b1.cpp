#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    sort(arr, arr + n,greater<int>());
    int s;
    if(n%2==0){
        s = n / 2;
        for (int i = 0; i <s;i++){
        cout << arr[i]<<" "<<arr[n-i-1]<<" ";
    }
    }else{
        s = (n / 2);
        for (int i = 0; i <s;i++){
        cout << arr[i]<<" "<<arr[n-i-1]<<" ";
    }
    cout << arr[s];
    }
    
    
    
    return 0;
}