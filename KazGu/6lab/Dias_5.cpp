#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    string s;
    cout << "Please, Dias enter someone strings:" << endl;
    getline(cin, s);
    int len = s.length();
    for (int i = 0; i < len; ++i){
        if(s[i]==' '){
            v1.push_back(i);
        }
    }
    int n = v1[0];
    int k = v1[1];
    int l = v1[2];
    string str2,str3;
    str2 = s.substr(n + 1,k - n - 1);
    str3 = s.substr(k + 1,l - k - 1);
    cout << str2<<" "<<str3;
     return 0;
}