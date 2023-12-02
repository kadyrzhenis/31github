#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve(){
	int a,b,c;
    cin >>a>>b>>c;
    if(c<0){
        cout<<"NO SOLUTION"<<endl;
    }else if(a==0 && b==c*c){
        cout<<"MANY SOLUTIONS"<<endl;
    }
    else if(a==0 && b!=c*c){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        int res = (c*c - b);
        if(res%a==0){
           cout<<res/a;
        }else{
            cout<<"NO SOLUTION"<<endl;
        }
        
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