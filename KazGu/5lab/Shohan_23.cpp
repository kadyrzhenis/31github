#include <iostream>
using namespace std;
int main(){
    cout << "Please Shohan, Enter array arr:" << endl;
    int arr[6][6];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6;j++){
            cin >> arr[i][j];
        }
    }

    int C=1;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6;j++){
            if(i==j){
                C *= arr[i][j];
            }
        }
    }
    cout << C;
    return 0;
}