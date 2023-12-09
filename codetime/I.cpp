#include <iostream>
#include <string>
using namespace std;
int arr[100005],a[100005],b[100005];
int main(){
    int n, m,x=0,y=0;
    cin >> n >> m;
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    a[0] = arr[0];
    for (int i = 1; i < n;++i){
        a[i] = a[i - 1] + arr[i];
        x++;
        if(a[i]>m){
            break;
        }
    }
    b[0] = arr[n - 1];
    for (int i = 1; i < n;++i){
        b[i] = b[i - 1] + arr[n-i-1];
        y++;
        if(b[i]>m){
            break;
        }
    }
    if(x>y){
        cout << "Yan";
    }else if(x<y){
        cout << "Nathan";
    }else{
        cout << "Empate";
    }


    return 0;

}