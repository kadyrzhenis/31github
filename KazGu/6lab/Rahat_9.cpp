#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str;
    int n = 10;
    string arr[n];
    cout << "Plese, Rahat Enter a text:\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
        }
        for (int i = 0; i < n-1; ++i)
        {
            for (int j = i+1; j < n; ++j)
            {
                if (arr[i][0] + arr[i][1] + arr[i][2] == arr[j][2] + arr[j][3] + arr[j][4])
                {
                    string s = arr[i];
                    arr[i] = arr[j];
                    arr[j] = s;
                    cout << arr[i] << " "<<i<<" " << arr[j] << endl;
                    s = "";
                    break;
                }
                
            }
        }
        for (int i = 0; i < n;i++){
            cout << arr[i]<<" ";
        }
            return 0;
}