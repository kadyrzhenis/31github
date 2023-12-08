#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
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
        if(arr[i]>=-1 && arr[i]<=1){
            arr[i]=pow(arr[i],3);
        }
    }
    
    cout << "Kolichestvo nuleh = " << zero << "\n";
    for (int i = 0; i < n;i++){
        cout <<"esli chisel v diapazone [-1,1] togda cube = arr["<<i+1<<"]="<<arr[i]<<endl;
    }
    return 0;
}
