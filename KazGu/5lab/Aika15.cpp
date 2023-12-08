#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int sum=0;
    int arr[6][6];
    cout << "Please Aika, Enter array arr:" << endl;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6;j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}