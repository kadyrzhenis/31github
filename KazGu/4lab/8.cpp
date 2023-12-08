#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=10;
    int sum = 0, otri = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        if(arr[i]<0){
            otri++;
        }
        if(arr[i]>=0 && arr[i]%3==0){
            sum += arr[i];
        }
    }
    
    cout << "Kolichestvo otrichatelnih = " << otri << "\n";
    cout << "summa chisel polozitelnih sum = "<<sum<<"\n";
    return 0;
}