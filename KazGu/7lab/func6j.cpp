#include <iostream>
#include<cmath>
using namespace std;
int get_max(int a,int b, int c,int d){
    return max(max(a,b),max(c,d));
}
int main() {
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    cout << get_max(x, y, z, w);
    return 0;
}