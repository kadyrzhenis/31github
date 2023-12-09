#include <iostream>
#include <string>
using namespace std;
int arr[100005],array[100005];
int main(){
    int n, m,sum=0;
    cin >> n >> m;
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    array[0] = arr[0];
    for (int i = 1; i < n;++i){
        array[i]=array[i-1]+arr[i];
    }
    int a, b;
    while(m--){
        cin >> a >> b;
        a--;
        b--;
        sum = array[b] - array[a - 1];
        if(sum%2==0){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
        sum = 0;
    }
        return 0;

}