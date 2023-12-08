#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,l,x;
vector<int> v;
int main(){
		
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());
    l = v.size();
    if(l%2==0){
        cout << v[(l / 2)-1] << " " << v[l / 2];
    }else{
        cout << v[l / 2];
    }

    return 0;
}