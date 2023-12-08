#include <iostream>
#include <set>
using namespace std;
int main(){
    string n;
    set<int> res;
    cin >> n;
    for (int i = 0; i < n.size();++i){
        res.insert(tolower(n[i]));
    }
    cout << res.size() << endl;
    for (set<int>::iterator it = res.begin(); it != res.end();it++){
        cout << (char)*it<< " ";
    }
    return 0;
}