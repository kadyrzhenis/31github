#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
    int otri = 0, polo = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]>0){
            polo++;
        }
        if(arr[k]<0){
            otri++;
        }
    }
    cout << "Kolichestvo otritsatel = " << otri << "\n";
    cout << "Podschitat' raznost' polozhitel'nykh chisel = "<<otri-polo<<"\n";

    return 0;
}
