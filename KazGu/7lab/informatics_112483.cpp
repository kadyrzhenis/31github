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
    

	sort(v.begin(),v.end());

	for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

	return 0;
}