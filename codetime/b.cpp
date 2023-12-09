#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
       ll a,b;
       cin >> a;
       ll arr[a];
       for (int i = 0; i < a;++i){
           cin >> arr[i];
       }
       ll cnt = 0;
       while(a){
           a = a / 2;
           cnt++;
       }
       cout << cnt;
       
}