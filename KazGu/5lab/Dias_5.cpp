#include <iostream>
using namespace std;

int main(){
    int m, n, sum = 0;
    cout << "Please Dias, Enter n row number and m column number" << endl;
    cin >> m >> n;
    cout << "Please Dias, Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
  
    for (int i = 0; i < m; i++){
        int max = 0;
        for (int j = 0; j < n; j++)
        {
         if(arr[i][j]>max){
             max = arr[i][j];
         }
        }
       sum += max;

}
cout<<"Sum is max numbers of in row = "<<sum;
}