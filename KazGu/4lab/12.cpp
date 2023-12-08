#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
    int sum = 0, nechet = 0,summa=0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        if(arr[i]%2!=0){
            nechet++;
            summa += arr[i];

        }
        if(arr[i]>=-15 && arr[i]<=5){
            sum += arr[i];
        }
    }
    
    cout << "sredneye arifmeticheskoye nechetnykh chisel = " << summa/nechet << "\n";
    cout << "summa chisel v diapazone [-15,5] sum = "<< sum <<"\n";
    return 0;
}
