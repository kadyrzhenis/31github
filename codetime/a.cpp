#include <iostream>
using namespace std;
long long gcd (long long a, long long b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
int main(){
    int t;
    cin >> t;
    while(t>0){
        long long a,b,c;
        cin >> a >> b;
        c = gcd(a, b);
        if(c>1){
            cout << "Sim" << endl;
        }else{
            cout << "Nao"<<endl;
        }
        t--;
    }
    return 0;
}