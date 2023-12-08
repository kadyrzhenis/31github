#include <iostream>
const int s = 7;
int n;
using namespace std;
void Input(int matr[][s])
{
    int i, j;
    do {
        cout << "Vvedite razmernost matritsy: \n Kolichestvo strok i stolbcov n<="
            << s << " -> "; cin >> n;
    } while (n <= 0 || n > s);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "Vvedite znachenie elementa matr[" << i << "]["
                << j << "] -> ";  cin >> matr[i][j];
        }
 
}
 
void Print_matr(int matr[][s])
{
    int i, j;
    cout << "Ishodnaja matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)  cout << "\t" << matr[i][j];
        cout << endl;
    }
}
 
void Print_new_matr(int b[][s])
{
    int i, j;
    cout << "New matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)  cout << "\t" << b[i][j];
        cout << endl;
    }
}
int main()
{
    int matr[s][s];
    int b[s][s];
    int i, ii, j, jj, tmp;
 
    Input(matr);
    Print_matr(matr);
 
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            tmp = 0;
            for (ii = 0; ii < n; ii++)
                for (jj = 0; jj < n; jj++)
                    if (matr[ii][jj] > 0 && ii != i && jj != j)
                        tmp++;
            b[i][j] = tmp;
        }
    Print_new_matr(b);
    return 0;
}