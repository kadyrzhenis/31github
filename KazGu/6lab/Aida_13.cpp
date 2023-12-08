#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    string s;
    cout << "Please, Aida enter someone strings:" << endl;
    getline(cin, s);
    int len = s.length();
    for (int i = 0; i < len; ++i){
        if(s[i]==' '){
            v1.push_back(i);
        }
    }
    int n = v1.size() - 1;
    int k = v1[n];
    string str = s.substr(k + 1, len - k - 1);
    int cnt = 0;
    for (int i = 0; i < str.size();++i){
          if(str[i]=='a'){
              cnt++;
          }
     }
     cout << cnt;
     return 0;
}