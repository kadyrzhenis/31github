#include <iostream>
#include <cmath>
using namespace std;
int arr[3][100005];
int main(){
    int n, m;
    double res_1 = 0, res_2 = 0;
    cin >> n;
    for (int k = 0; k < 3;++k){
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[k][i];
        }
    }
    for (int k = 0; k < 3;++k){
        for (int i = 0; i < n; ++i)
        {
            res_1 += pow((arr[0][i] - arr[1][i]), 2);
            res_2 += pow((arr[0][i] - arr[2][i]), 2);
        }
    }
    if(res_2>=res_1){
        cout << "Yan";
    }else{
        cout << "MaratonIME";
    }
    
        return 0;

}