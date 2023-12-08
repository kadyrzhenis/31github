#include<bits/stdc++.h>
using namespace std;
int main() {
  long long sum=0,t,two=0,three=0,five=0,x,x1,x2,y,y1,y2,a,b,c,d;
	cin >> t;
  vector<int> v;
  string s="";
	while(t--) {
		long long n,k; cin >>n>>k;
       if(k-2>=n){
         sum++;
       }else{
         sum+=0;
       }
	}
   cout<<sum;
}