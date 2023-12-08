#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
    int otri = 0, nechet = 0;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]<0){
            otri++;
        }
        if(arr[k]>=0 && arr[k]<=10){
            arr[k] = arr[k] * arr[k];
        }
    }
    cout << "Kolichestvo otrichatelnih = " << otri << "\n";
    for (int i = 0; i < n;i++){
        cout <<"esli chisel v diapazone [0,10] kvadrati = arr["<<i<<"]="<<arr[i]<<endl;
    }
    return 0;
}
