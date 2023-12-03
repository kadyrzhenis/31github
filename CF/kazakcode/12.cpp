#include <iostream>
using namespace std;
int main(){
    unsigned long long a,b,c,res=0;
    cin >> a>>b>>c;
    unsigned long long m=10e12+7;
    res=(a+b+c)%m;
    cout <<res;
    return 0;
}