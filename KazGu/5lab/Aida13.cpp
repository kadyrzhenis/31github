#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int k, sum=0;
    cout << "Please Aida, Enter constant k" << endl;
    cin >> k;
    int arr[4][5];
    cout << "Please Aida, Enter array arr:" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5;j++){
            if(i+j==k){
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}