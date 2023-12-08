#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,k;
cin >> n;
vector<int> v;
for(int i = 0;i < n;i ++) {
int x;
cin >> x;
v.push_back(x);
}
cin >> k;
sort(v.begin(),v.end());
int sum = 0;
for(int i = v.size()-k;i < v.size();i ++){
    sum += v[i];
 }
 cout << sum;
 return 0;
}