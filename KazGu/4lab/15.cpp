#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    int otri = 0,c=0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]>0){
            otri++;
        }
        if(arr[k]==0){
            cout << "nomer nulov arr[" << k << "]==" << 0 << "\n";
        }
    }
    
    cout << "Kolichestvo otrichatelnih = " << otri << "\n";
    
    return 0;
}
