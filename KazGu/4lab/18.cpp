#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
    int zero = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]==0){
            zero++;
        }
        if(arr[k]>=-5 && arr[k]<=5){
            arr[k] = arr[k] * arr[k];
        }
    }
    cout << "Kolichestvo nuleh = " << zero << "\n";
    for (int i = 0; i < n;i++){
        cout <<"esli chisel v diapazone [-5,5] togda kvadrati = "<< arr[i] << "\n";
    }
    return 0;
}
