#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
bool Valid(string s,int n){
    int cnt = 0;
    for (int i = 0;i<s.size();++i){
        if(s[i]-'0'>=0 && s[i]-'0'<=9){
            cnt++;
        }
    }
    return (cnt >= n) ? true : false;
}
int main() {
    int x;
    string s;
    cin >> s >> x;
    if(Valid(s,x)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}