#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, j;
    cin >> n >> i >> j;
    int answer;
    answer = min(abs(i - j)-1, abs(min(i,j)+n-max(i,j)-1));
    cout << answer;
    return 0;
}