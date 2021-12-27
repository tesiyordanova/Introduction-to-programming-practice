// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 20;

void fillMatrix(int mtr[][max_size], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j< m; j++)
        {
            cout << "mtr[" << i << "][" << j << "]=";
            cin >> mtr[i][j];
        }
    }
}
void printMatrix(int mtr[][max_size], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mtr[i][j];
        }
        cout << endl;
    }
}
void multiply(int mtr1[][max_size], int n1, int m1, int mtr2[][max_size], int n2, int m2) {
    if (m1!=n2)
    {
        cout << "Cannot multiply!";
    }
    else
    {
        int mtr3[max_size][max_size];
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                mtr3[i][j] = 0;
                for (int k = 0; k < n2; k++) {
                    mtr3[i][j] += mtr1[i][k] * mtr2[k][j];
                }
                cout << mtr3[i][j]<<" ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int mtr1[max_size][max_size];
    int n1; cin >> n1;
    int m1; cin >> m1;
    fillMatrix(mtr1, n1,m1);
    printMatrix(mtr1, n1, m1);
    cout << endl;

    int mtr2[max_size][max_size];
    int n2; cin >> n2;
    int m2; cin >> m2;
    fillMatrix(mtr2, n2, m2);
    printMatrix(mtr2, n2, m2);
    cout << endl;

    multiply(mtr1, n1, m1, mtr2, n2, m2);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
