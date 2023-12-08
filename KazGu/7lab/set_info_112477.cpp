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
    cout <<v.size();
    return 0;
}