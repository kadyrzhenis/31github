#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    long long cnt = 0;
    getline(cin, s);
    if(s[0]>='0' && s[0]<='9'){
            cnt++;
    }
    for (long unsigned int i = 0; i < s.size();++i){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') || (s[i]=='_')){
            cnt += 0;
        }else{
            cnt++;
        }
    }
    if(cnt==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
        return 0;
}