#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve(){
	int n=10;
    char arr[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
           cin>>arr[i][j];
        }
    }
    int res=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
          if(arr[i][j]=='X'){
              if((min(i,j)==4 || min(i,j)==5) && (max(i,j)==4 || max(i,j)==5)){
                  res+=5;
              }
              else if((min(i,j)==3 || min(i,j)==6 || min(i,j)==4 || min(i,j)==5) && (max(i,j)==3 || max(i,j)==4 || max(i,j)==5 || max(i,j)==6)){
                  res+=4;
              }
              else if((min(i,j)==2 || min(i,j)==7 || min(i,j)==3 || min(i,j)==6 || min(i,j)==4 || min(i,j)==5) && (max(i,j)==2 || max(i,j)==7 || max(i,j)==3 || max(i,j)==4 || max(i,j)==5 || max(i,j)==6)){
                  res+=3;
              }
              else if((min(i,j)==1 || min(i,j)==8 || min(i,j)==2 || min(i,j)==7 || min(i,j)==3 || min(i,j)==6 || min(i,j)==4 || min(i,j)==5) && (max(i,j)==1 || max(i,j)==8 ||max(i,j)==2 || max(i,j)==7 || max(i,j)==3 || max(i,j)==4 || max(i,j)==5 || max(i,j)==6)){
                  res+=2;
              }
              else{
                  res+=1;
              }
            
          }
        }
        
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