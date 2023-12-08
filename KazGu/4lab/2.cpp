#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=15;
    int chet = 0, nechet = 0;
    int arr[n];
    cout << "Enter numbers\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }
    for (int k = 0; k < n;k++){
        if(arr[k]%2==0){
            chet++;
        }
        if(arr[k]%2==1){
            nechet++;
        }
    }
    int a[11];
    cout << "Kolichestvo chetnih=" << chet << "\n";
    cout << "Kolichestvo nechetnih="<<nechet<<"\n";
    for (int i = 0; i < 11;i++){
        a[i] = pow(arr[i],2);
        cout <<"Kvadrati v diapazone [1,11]"<<i+1<<"="<< a[i] << "\n";
    }
    return 0;
}
