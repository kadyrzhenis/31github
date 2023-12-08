#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int k,n,r=0,g=0,b=0,cnt=0;
    string ss;
    cin>>ss;
    vector<int> v;
    n=ss.size();
    for(int i=1;i<n;i++){
       for(int j=0;j<i;j++){
       if(ss[i]==ss[j] ){
           cnt+=1;
           break;
       }else{
           cnt+=0;
       }
    }}
  k=n-cnt;
  if(k%2!=0){
      cout<<"IGNORE HIM!";
  }else{
      cout<<"CHAT WITH HER!";
  }
}