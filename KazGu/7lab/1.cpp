#include <iostream>
using namespace std;
int n, m, a[1000][1000];
void process(int x, int y) {
    int sum=0;
for (int j = 0; j < y; j++) {
for (int i = 0; i < x; i++) {
   sum+=a[i][j];
}
        cout << "sum of column " <<j<<" = "<< sum << endl;
        sum = 0;
}
}
int main() {
cin >> n >> m;
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
cin>>a[i][j];
}
}
process(n, m);
return 0;
}