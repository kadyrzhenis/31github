#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve(){
	int a,b,c;
    cin >>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
 
 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int t;
   t=1;
   while(t--){
       solve();
   }
 
   return 0;
}