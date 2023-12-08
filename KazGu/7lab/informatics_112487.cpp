#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,l,x;
vector<int> v;
int main(){
		
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	while (cin>>x)
    {
        if(x==0){
            break;
        }else{
            v.push_back(x);
        }
    }

    l = v.size();
    for(int i = 0; i < l/2; ++i){
        cout << v[i]+v[v.size()-i-1] << " ";
    }
    if(l%2==1){
        cout << v[l / 2];
    }

	return 0;
}