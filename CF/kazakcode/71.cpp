#include <bits/stdc++.h>
using namespace std;
vector<bool> prime (10000001, true);
void checkPrime(){
    int n=1000000;
    prime[0] = prime[1] = false;
    for (int i=2; i<=n; ++i){
       
    }
	    
}
int main() {
  checkPrime();
  int m;
  cin>>m;
  vector<int>v;
  int cnt=0;
  for(int i=0;i<m;++i){
           int k;
           cin>>k;
           if(prime[k]){
               v.push_back(k);
               cnt++;
           }
       }
       cout<<cnt<<endl;
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();++i){
           cout<<v[i]<<" ";
       }
  
  return 0;
}
