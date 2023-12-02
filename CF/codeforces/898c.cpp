#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve(){
	long long n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>sm;
    int sum=0,res=INT_MIN;
    for(int i=0;i<n;i++){
       sum+=arr[i];
       sm.push_back(sum);
    }
    
    for(int i=0;i<n;i++){
       if((i+1)*arr[i]-sm[i]>k){
           res=(sm[i-1]+k)/(i);
           break;
       }
    }
    if(res==INT_MIN){
        res=(sm[n-1]+k)/(n);
    }
    
    cout<<res<<endl;
    
}
 
 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int t;
   cin >> t;
   while(t--){
       solve();
   }
 
   return 0;
}