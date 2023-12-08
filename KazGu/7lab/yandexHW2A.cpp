#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int cnt=0,max=1,n;
    while(cin>>n){
        if(n==max){
            cnt++;
        }else if(n>max){
            max = n;
            cnt = 1;
        }
        if(n==0){
            break;
        }
    }
    cout << cnt;
    return 0;
}