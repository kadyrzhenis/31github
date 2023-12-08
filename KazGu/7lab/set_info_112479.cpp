#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    set<char> v;
    getline(cin,s);
    string ss="",res="";
    for (int i = 0; i < s.size(); ++i){
       v.insert(s[i]);
    }
       for(set<char>::iterator it=v.begin();it!=v.end();++it){
           ss += char(*it);
       }
    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j < ss.size();++j){
            if(s[i]==ss[j]){
                res += s[i];
                ss.erase(j, 1);
            }
        }
    }
    cout << res;
    return 0;
}