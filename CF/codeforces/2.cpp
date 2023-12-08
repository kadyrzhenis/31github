#include<bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin>>n;
    long long arr[n];
    long long even=0,odd=0,sum=0;
    vector<int> v;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	for(int i=n-1;i>0;--i){
		if(arr[i]>arr[i-1]){
			arr[i-1]=arr[i-1];
		}else{
			arr[i-1]=arr[i]-1;
		}
	}for(int i=0;i<n;++i){
		if(arr[i]>0){
		sum+=arr[i];}
		else{
			sum+=0;
		}
	}
	cout<<sum;
	
}