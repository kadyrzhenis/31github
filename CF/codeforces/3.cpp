#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int arr[n];
    int a,b,c;
    vector<int> v;
	while(n>0) {
		cin>>a>>b>>c;
        if(a>=4 && b>=4 && c>=4){
          v.push_back(7);
        }else if(a>=3 && b>=3 && c>=3){
            v.push_back(6);
        }else if((a>=2 && b>=2 && c>=3) || (a>=3 && b>=2 && c>=2) || (a>=2 && b>=3 && c>=2)){
            v.push_back(5);
        }else if((a>=2 && b>=2 && c>=1) || (a>=2 && b>=1 && c>=2) || (a>=1 && b>=2 && c>=2)){
            v.push_back(4);
        }else if((a>=1 && b>=1 && c>=1) ||(a>=2 && b>=2 && c==0) || (a>=2 && b==0 && c>=2) || (a==0 && b>=2 && c>=2)){
            v.push_back(3);
        }else if((a>=1 && b>=1 && c>=0) || (a>=1 && b>=0 && c>=1) || (a>=0 && b>=1 && c>=1)){
            v.push_back(2);
        }else if((a>=1 && b>=0 && c>=0) || (a>=0 && b>=1 && c>=0) || (a>=0 && b>=0 && c>=1)){
            v.push_back(1);
        }else {
            v.push_back(0);
        }
        n=n-1;
	}
    for(int i=0;i<v.size();i++){
       cout<<v[i];
       cout<<endl;
    }
    
}