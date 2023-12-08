#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=12;
    int otri = 0, nechet = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]%2==1){
            nechet++;
        }
        if(arr[k]<0){
            otri += arr[k];
        }
    }

    cout << "Kolichestvo nechetnih = "<<nechet<<"\n";
    cout << "summa otrichatelnih chisel sum = " << otri << "\n";
    return 0;
}
