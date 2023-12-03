#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,cnt=0;
    string s;
    cin >> s;
    cout<<s<<"+5="<<to_string(stoi(s)+5)<<";"<<endl;
    cout<<s<<"-5="<<to_string(stoi(s)-5)<<";"<<endl;
    cout<<s<<"*5="<<to_string(stoi(s)*5)<<";"<<endl;
    cout<<s<<":5="<<stoi(s)/5.0<<";"<<endl;
}