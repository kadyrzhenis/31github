#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long u, v;
    cin>>u>>v;
    vector<int>cnt(70,0);
    if(u>v){
        cout<<"-1\n";
        return 0;
    }
    v-=u;
    for(int i=60;i>=0;--i){
        if(u>=(1LL<<i)){
            cnt[i]++;
            u-=(1LL<<i);
        }
    }
    for(int i=60; i>=0;--i){
        if(v>=(1LL<<i)){
            if(i==0){
                cout<<"-1\n";
                return 0;
            }
            cnt[i-1]+=2;
            v-=(1LL<<i);
        }
    }
    vector<long long>ans;
    while(true){
        long long x=0;
        for(int i=60; i>=0;--i){
            if(cnt[i]){
                cnt[i]--;
                x+=(1LL<<i);
            }
        }
        if(!x){
            break;
        }
        ans.push_back(x);
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }

}
