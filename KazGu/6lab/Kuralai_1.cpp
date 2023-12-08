#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    string s;
    cout<<"Please, Kuralai enter someone strings:"<<endl;
    getline(cin, s);
    int len = s.length();
    for (int i = 0; i < len; ++i){
        if(s[i]=='/'){
            v1.push_back(i);
        }
    }
    v2.push_back(v1[0]);
    for (int i = 1; i < v1.size();i++){
        int l = v1[i] - v1[i - 1] - 1;
        v2.push_back(l);
    }
    int maxstr;
    for (int i = 0; i < v2.size();++i){
         maxstr  = *max_element(v2.begin(),v2.end());
    }

    cout << maxstr;
    return 0;
}