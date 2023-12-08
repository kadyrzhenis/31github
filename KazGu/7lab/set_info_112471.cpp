#include <iostream>
#include <set>
using namespace std;
int main(){
    string n;
    set<char> res;
    cin >> n;
    for (int i = 0; i < n.size();++i){
        if(n[i]>='0' && n[i]<='9'){
          res.insert(n[i]);
        }
    } if(res.size()==0){
        cout << "NO";
    }else{
        for (set<char>::iterator  it = res.begin(); it != res.end();++it){
            cout << *it;
        }
    }
        return 0;
}