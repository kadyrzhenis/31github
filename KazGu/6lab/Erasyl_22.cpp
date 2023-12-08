#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Please, Erasyl enter someone strings:"<<endl;
    getline(cin, s);
    s = s + " Erasy";
    cout << s;
    return 0;
}