#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    int zero = 0, nechet = 0;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]==0){
            zero++;
        }
        if(arr[k]>=-15 && arr[k]<=15){
            arr[k] = sin(arr[k]);
        }
    }
    cout << "Kolichestvo nuleh = " << zero << "\n";
    for (int i = 0; i < n;i++){
        cout <<"sinus chisel, vkhodyashchikh v diapazon [-15..15] = arr["<<i<<"]="<<arr[i]<<endl;
    }
    return 0;
}
