#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long k,n,sum=0;
    cin>>n;
    vector<long long>v;
    long long arr[n];
    long long ar[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }for(int i=0;i<n;i++){
       cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;++j){
        if(arr[i]>arr[i+j]){
           if(ar[i]>=ar[i+j]){
               sum+=arr[i]-arr[i+j];
           }else{
               sum+=0;
           }
        }else if(arr[i]<arr[i+j]){
            if(ar[i]<=ar[i+j]){
               sum+=arr[i+j]-arr[i];
           }else{
               sum+=0;
           }
        }}}
  cout<<sum;
}