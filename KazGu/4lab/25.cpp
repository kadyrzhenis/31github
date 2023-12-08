#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    int num = 0, mult = 1;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]<15){
            num++;
        }
        if(arr[k]>=10 && arr[k]<=15){
            mult *= arr[k];
        }
    }
    cout << "Kolichestvo menshe 15 = " << num << "\n";
    cout << "proizvedeniye chisel, vkhodyashchikh v diapazon [10..15] mult = " << mult;
    return 0;
}
