#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    set<int> res;
    cin >> n;
    for (int i = 0; i < n;++i){
        int x;
        cin >> x;
        res.insert(x);
    }
    cout << res.size();
    return 0;
}