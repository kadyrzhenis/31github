#include <iostream>
using namespace std;
int main(){
    int n=10;
    int sum = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]>0){
            sum += arr[k];
        }
    }
    cout << "Summa polozitelnih chisel:  " << sum<<"\n";
    for (int i = 0; i < n;i++){
        if(arr[i]<0){
            cout<<"arr["<<i<<"]="<<arr[i]<<endl;
        }
    }
        return 0;
}