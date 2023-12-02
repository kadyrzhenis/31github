#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve(){
	int n,k;
	cin >> n>>k;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	if(find(a.begin(), a.end(), k) != a.end()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }	
}
 
 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int tt;
   cin >> tt;
   for(int mt = 0; mt < tt; mt++){
   	solve();
   }
 
   return 0;
}