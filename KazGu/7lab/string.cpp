#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int c = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.' || s[i] == ',' || s[i] == ';' || s[i] == ':' || s[i]=='!' || s[i]=='?'){
            c++;
        }
    }
    cout << c;
    return 0;
}