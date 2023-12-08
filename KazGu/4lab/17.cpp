#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    float kol = 0, sumotri = 0;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        if(arr[i]<0){
            sumotri+=arr[i];
        }
        if(arr[i]>=2.5 && arr[i]<=3.5){
            kol++;
        }
    }
    cout << "kol chisel v diapozone [2.5,3.5] kol = "<<kol<<"\n";
    cout << "summa otrichatelnih = " << sumotri << "\n";
    return 0;
}
