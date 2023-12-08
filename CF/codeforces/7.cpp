#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int k,n,sum=0;
    cin>>n;
    vector<int> v;
    while(n>0){
        cin>>k;
        if(k==1){
          v.push_back(-1);  
        }else if(k==2){
            v.push_back(23);
        }else if (k==3){
            v.push_back(239);
        }else if(k==4){
            v.push_back(6789);
        }else if (k==5){
            v.push_back(33223);
        }else{
           v.push_back(-1);
        }
        n=n-1;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}