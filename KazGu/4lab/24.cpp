#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = 0, sum=0;
    float arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]>=1.5){
            num++;
        }
        if(arr[k]>=-1 && arr[k]<=0){
            sum+= arr[k];
        }
    }
    cout << "Kolichestvo bolshe ili ravnih 1.5 = " << num << "\n";
    cout << "summa vkhodyashchikh v diapazon [-1..0] sum = " << sum;
    return 0;
}
