#include <iostream>
#include <algorithm> 
using namespace std;

int main() {

    string arr[10], word;

    int size = 0;
    while (cin >> word) {
        if (size==9)
            break;
        arr[size++] = word;  
    }

    sort(arr, arr + size); 

    for (int i = 0; i < size; i++){
         cout << arr[i] << endl;
    }
    return 0;
}