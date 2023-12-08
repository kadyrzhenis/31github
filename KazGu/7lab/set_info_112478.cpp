#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    set<char> v;
    getline(cin,s);
    string ss="",res="";
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j < s.size();++j){
            if(i!=j && s[i]==s[j]){
                cnt++;
            }
        }
        if(cnt==0){
            v.insert(s[i]);
        }
        cnt = 0;
    }
    int k = v.size();
    for (set<char>::iterator it = v.begin(); it != v.end();++it){
        cout << (char)*it;
    }
    if(k==0){
        cout << "NO";
    }
        return 0;
}