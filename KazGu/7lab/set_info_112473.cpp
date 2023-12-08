#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    long long cnt = 0;
    getline(cin, s);
    for (long unsigned int i = 0; i < s.size();++i){
        if(s[0]=='0'){
            cnt++;
        }
        else if(s[i]>='0' && s[i]<='7'){
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