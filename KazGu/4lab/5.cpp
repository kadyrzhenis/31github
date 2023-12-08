#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    float sum = 0, zero = 0;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]>=-15 && arr[i]<=15){
            sum += arr[i];
        }
    }
    
    cout << "Kolichestvo nuleh = " << zero << "\n";
    cout << "summa chisel v diapazone [-15,15] sum = "<<sum<<"\n";
    return 0;
}
