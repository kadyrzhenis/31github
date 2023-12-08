#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,l,x;
vector<int> v,t;
vector<vector<int> > res;

int main(){
		
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	cin >> n >> l;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());

	t.push_back(v[0]);

	for(int i = 1; i < v.size(); ++i){
		if(v[i]-v[i-1]<=l){
			t.push_back(v[i]);
		}else{
			res.push_back(t);
			t.clear();
			t.push_back(v[i]);
		}
	}

	if(t.size() > 0){
		res.push_back(t);
	}

	cout << res.size() << endl;

	for(int i = 0; i < res.size(); ++i){
		for(int j = 0; j < res[i].size(); ++j){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
