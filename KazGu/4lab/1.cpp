#include <iostream>
using namespace std;
int main(){
    int n=15;
    int negative = 0, zero = 0, sum = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]<0){
            negative++;
        }
        if(arr[k]==0){
            zero++;
        }
        if(arr[k]>0){
            sum += arr[k];
        }
    }
    cout << "Kolichistvo otricatelnih:  " << negative<<"\n";
    cout << "Kolichistvo nolevih:  " << zero<<"\n";
    cout << "Summa polozitelnih chisel:  " << sum<<"\n";
    return 0;
}