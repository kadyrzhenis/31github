#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    int otri = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]>0){
            otri++;
        }
        if(arr[k]>=0 && arr[k]<=10){
            arr[k] = arr[k] * 10;
        }
    }
    cout << "Kolichestvo otrichatelnih=" << otri << "\n";
    for (int i = 0; i < 10;i++){
        cout <<"umnozhet na 10 v diapazone [0,10]"<< arr[i] << "\n";
    }
    return 0;
}
