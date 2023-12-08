#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    float sum = 0, bol = 0;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        if(arr[i]>=1.5){
            bol++;
        }
        if(arr[i]<=0){
            sum += arr[i];
        }
    }
    
    cout << "Kolichestvo bolshe 1.5 chisel = " << bol << "\n";
    cout << "summa chisel otrichatelnih sum = "<<sum<<"\n";
    return 0;
}
