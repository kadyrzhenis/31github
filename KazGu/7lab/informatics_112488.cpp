#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool isPrime(int x){
    if(x<=1){
        return false;
    }if(x==2){
        return true;
    }
    for (int i = 2; i * i <= x;++i){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,k;
	cin >> n>>k;
    int cnt = 0;
    for(int i = n; i <= k; ++i){
		if(isPrime(i)==true && i%10==3){
            cout << i << " ";
            cnt++;
        }
	}
    if(cnt==0){
        cout << 0;
    }

    return 0;
}