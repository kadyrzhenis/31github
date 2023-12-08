#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[500500];
    string s="";
    int zero=0,odd=0,sum=0;
	int t; cin >> t;
    vector<int> v;
	while(t--) {
		int n; cin >> n;
		for(int i=0;i<2*n;++i ){
            cin>>arr[i];
        }
        sort(arr, arr+2*n);
		for(int i = 0; i < 2*n; i++) {
            sum=arr[n]-arr[n-1];
            }
         v.push_back(sum);
        sum=0;
	}
    for(int i=0;i<v.size();++i){
       cout<<v[i]<<" ";
    }
    
}