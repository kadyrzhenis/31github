#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    set<char> v;
    long long cnt = 0;
    getline(cin, s);
    for (int i = 0; i < s.size();++i){
        v.insert(s[i]);
    }
    if(s[0]=='0'){
            cnt++;
    }
    if(s[0]==' '){
            cnt++;
    }
    for (set<char>::iterator it = v.begin(); it != v.end();++it){
        if((*it>='0' && *it<='9') || (*it>='a' && *it<='f')|| (*it>='A' && *it<='F') ){
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
}