#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Do()   ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    int a=0,b=0,k=0;
    string s,res;
    getline(cin,s);
    for(int i=0;i<s.size();++i){
        char c= toupper(s[i]);
        if(c>='A' && c<='Z'){
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y'){
                a++;
            }else{
                b++;
            }
        }
    }
    if(a>=b){
       for(int i=0;i<s.size();++i){
           char c= toupper(s[i]);
            if(c>='A' && c<='Z'){
                if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y'){
                    res+=toupper(s[i]);
                }else{
                    res+=tolower(s[i]);
                }
            }else{
                res+=tolower(s[i]);
            }
       }
    }else{
        for(int i=0;i<s.size();++i){
           char c= toupper(s[i]);
            if(c>='A' && c<='Z'){
                if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y'){
                    res+=tolower(s[i]);
                }else{
                    res+=toupper(s[i]);
                }
            }else{
                res+=tolower(s[i]);
            }
       }
    }
    cout<<res<<'\n';
    
}
int main()
{
    Do() int t = 1;
    while (t--)
    {
        solve();
    }
}