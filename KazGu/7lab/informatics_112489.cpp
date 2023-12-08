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
    int n;
	cin >> n;
	for(int i = 0; i <= 1000000000; ++i){
        
		if(isPrime(i)){
            cout << i << " ";
            n--;
        }
        if(n==0){
            break;
        }
	}

    return 0;
}