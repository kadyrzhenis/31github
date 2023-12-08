#include <iostream>
#include <cmath>
using namespace std;
int n, m, a[10000],b[10000];
void transpose(int x) {
for (int i = 0; i < x; i++) {
cout<<abs(a[i]-b[i])<<" ";
}
cout << endl;
}
int main() {
cin >> n;
for (int i = 0; i < n; i++) {
    cin >> a[i];
}
for (int j = 0; j < n; j++) {
    cin >> b[j];
}
transpose(n);
return 0;
}