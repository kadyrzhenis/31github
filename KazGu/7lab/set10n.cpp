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
    for (set<int>::iterator it = res.begin(); it != res.end();it++){
        if(*it%2==1){
            cout << *it << " ";
        }
    }
    return 0;
}