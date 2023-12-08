#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    string s;
    cout<<"Please, Ramazan enter someone strings:"<<endl;
    getline(cin, s);
    s = s + ' ';
    int len = s.length();
    for (int i = 0; i < len; ++i){
        if(s[i]==' '){
            v1.push_back(i);
        }
    }
    if(v1[0]==4){
        cout << s.substr(0, 4) << " ";
    }
    for (int i = 0; i < v1.size()-1;i++){
        int l = v1[i+1] - v1[i] - 1;
        if(l==4){
            cout << s.substr(v1[i] + 1, v1[i+1] - v1[i] - 1) << " ";
        }
        
    }

    return 0;
}