#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
    int num = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]>=1 && arr[k]<=11){
            arr[k] = arr[k] * arr[k];
            num++;
        }
    }
    cout << "Kolichestvo chisel v diapazone [1,11] = " << num << "\n";
    for (int i = 0; i < n;i++){
        cout <<"esli chisel v diapazone [1,11] togda kvadrati = arr["<<i<<"]="<<arr[i]<<endl;
    }
    return 0;
}