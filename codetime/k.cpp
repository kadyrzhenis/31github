#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int cnt = 1;
    cin >> s;
    s = s + 'H';
    for (int i = 0; i < s.size()-1;++i){
        if(s[i]-'A'==s[i+1]-'A'){
            cnt++;
        }else{
            cout << s[i] << cnt;
            cnt = 1;
        }
    }
        return 0;

}