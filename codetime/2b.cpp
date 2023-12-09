#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
       int a;
       cin >> a;
       double arr[a];
       for (int i = 0; i < a;++i){
           cin >> arr[i];
       }
       int k, l, r;
       double sum = 0, res;
       cin >> k;
       while(k--){
           cin >> l >> r;
           for (int i = l; i <= r;++i){
               sum += (1 / arr[i]);
           }
           res = (r - l + 1) / sum;
           cout << res << endl;
           sum = 0;
       }
       
}