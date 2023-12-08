#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double Hypo(int a, int b){
    double c = sqrt(a * a + b * b);
    cout << setprecision(4) << c;  
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << Hypo(x, y);
}