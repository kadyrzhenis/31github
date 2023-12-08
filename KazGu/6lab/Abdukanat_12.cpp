#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str;
    int n;
    cin >> n;
    string arr[n];
    cout << "Plese, Abdukanat Enter a text:\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
        }
    for (int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
        }
            return 0;
}