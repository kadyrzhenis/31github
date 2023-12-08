#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Please , Enter n row number and m column number" << endl;
    cin >> m >> n;
    cout << "Please , Enter array arr:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int max = -5000;
    int min = 5000;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n;j++){
           if(arr[i][j]>max){
               max = arr[i][j];
           }if(arr[i][j]<min){
               min = arr[i][j];
           }
        }
    }
    int bol, men;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] == max)
            {
                bol = i;
            }
            if(arr[i][j]==min){
                men = i;
            }
        }
    }
    cout << "***********************" << endl;
    for (int i = 0; i < m;++i){
        if(i==bol){
        for (int j = 0; j < n;++j){
            cout << arr[men][j] << " ";
        }
        cout << endl;
        }
        else if(i==men){
            for (int j = 0; j < n;++j){
            cout << arr[bol][j] << " ";
         }
         cout << endl;
        }
        else{
            for (int j = 0; j < n;++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   }
}