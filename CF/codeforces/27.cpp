#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve(){
	long long n,k;
    int l;
	cin >> n;
    vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
    long long q;
    cin>>q;
    while(q--){
        cin>>l>>k;
        int res=-1;
        int cnt=a[l-1];
        if(l==n){
            if(cnt>=k){
                res=max(res,l);
            }
        }
        for(int j=l;j<n;++j){
            if(cnt>=k){
                res=max(res,j);
            }
            cnt=cnt&a[j];
        }
        
        cout<<res<<endl;
    }

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