#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    int cnt = 0;
    cout << "Please, Erasyl enter someone strings:" << endl;
    getline(cin, s);
    s = s + ' ';
    int len = s.length();
    for (int i = 0; i < len; ++i){
        if(s[i]=='n'){
            cnt++;
        }
        if(s[i]==' '){
            cout << cnt << " ";
            cnt = 0;
        }
    }
    
    return 0;
}