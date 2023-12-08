#include <iostream>
using namespace std;
int n, m, k;
double a[1000][1000];
void maxfunc(int x, int y){
    for (int i = 0; i < x; i++){
        double max = -10e9;
        for (int j = 0; j < y;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        cout << "max number row " << i << " = " << max<<endl;
       
    }
}
void process(int x, int y) {
  for (int j = 0; j < n; j++){
       int kol = 0;
        for (int i = 0; i < m;i++){
            if(a[i][j]<k){
                kol++;
            }
        }
        cout << "The number of elements less than the threshold k in column " << j << " = " << kol << endl;
    }
}
int main() {
cin >> n >> m >>k;
cout << "Enter array "<<endl;
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
cin>>a[i][j];
}
}
maxfunc(n, m);
process(n, m);
return 0;
}