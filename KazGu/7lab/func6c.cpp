#include <iostream>
#include <cmath>
using namespace std;
int x[100],y[100];
void get_count(int n,int a[],int b[]) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        x[a[i]]++;
        y[b[i]]++;
}
    for (int i = 0; i < 100;++i){
    sum += min(x[i], y[i]);
}
cout << sum;
}
int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
}
    for (int j = 0; j < n; j++) {
    cin >> b[j];
}
get_count(n,a,b);
return 0;
}