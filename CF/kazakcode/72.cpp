#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e6 + 5;
vector<bool> is_prime(N+1,true);
void Primes(){
    is_prime[0] = is_prime[1] = false;
    for (int i=2; i<=N; ++i)
	    if (is_prime[i])
		    if (i * 1ll * i <= N)
			    for (int j=i*i; j<=N; j+=i)
				    is_prime[j] = false;
    return;          
}
int main(){
    Primes();
    int n;
    cin>>n;
    vector<int>v;
    int cnt=0;
    for(int i=0;i<n;++i){
        int m;
        cin>>m;
        if(is_prime[m]){
            v.push_back(m);
            cnt++;
        }
    }
    if(cnt==0){
        cout<<-1<<endl;
    }else{
       cout<<cnt<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    }
    
    return 0;
}