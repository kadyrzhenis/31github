#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, j;
    cin >> n >> i >> j;
    if((n<=12 && i<=12) && (n!=i)){
        cout << 0;
    }else{
        cout << 1;
    }
    return 0;
}