#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    string s;
    cout<<"Please, Nazerke enter someone strings:"<<endl;
    getline(cin, s);
    s = s + ' ';
    int len = s.length();
    for (int i = 0; i < len; ++i){
        if(s[i]==' '){
            v1.push_back(i);
        }
    }
    if(s[0]=='A'){
        cout << s.substr(0, v1[0])<<" ";
    }
    for (int j = 0; j < v1.size()-1; ++j)
    {
        if (s[v1[j] + 1] == 'A')
        {
            cout << s.substr(v1[j] + 1, v1[j + 1] - v1[j] - 1) << " ";
        }
    }

    return 0;
}