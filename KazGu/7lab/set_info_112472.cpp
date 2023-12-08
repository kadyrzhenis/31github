#include <iostream>
#include <set>
using namespace std;
int main(){
    string n;
    set<char> res;
    int cnt[10]={0,0,0,0,0,0,0,0,0,0};
    cin >> n;
    for (int i = 0; i < n.size();++i){
        if(n[i]>='0' && n[i]<='9'){
            cnt[n[i] - '0']++;
        }
    }
    int s = 0;
    for (int i = 0; i < 10;++i){
        if(cnt[i]>1){
            cout << i;
            s++;
        }
    }
    if(s==0){
        cout << "NO";
    }
        return 0;
}