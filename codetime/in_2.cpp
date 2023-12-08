#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void factor(int n) {
    int i;
    for (i = 2; i <= (int) sqrt(n); i++) {
      while (n % i == 0) {
        v.push_back(i);
          n /= i;
		}
      }
      if (n > 1) v.push_back(n);
		for (int i = 0; i<v.size()-1;++i){
			cout << v[i]<<"*";
		}
		cout << v[v.size() - 1];
	  }

int main() {
	int n,cnt=0;
	cin>>n;
    factor(n);

	return 0;
}