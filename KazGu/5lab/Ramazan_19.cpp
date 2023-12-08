#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Please Ramazan, Enter n row number and n column number" << endl;
    cin >> n;
    cout << "Please Ramazan, Enter array arr:" << endl;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int max = -1000;
    int mx;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            if((i==j || i+j==n-1) && (arr[i][j]>max)){
                max = arr[i][j];
            }
        }
     mx = max;
    }
    cout << mx;
    for (int i = 0; i < n; i++){
       
        for (int j = 0; j < n;j++){
            if(i==j || i+j==n-1){
                arr[i][j] = mx;
            }
        }
    }
    cout << "New Array:" << endl;
    for (int i = 0; i < n; i++){
       
        for (int j = 0; j < n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}