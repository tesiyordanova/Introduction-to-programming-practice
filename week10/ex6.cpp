// ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void cordinate(int** mtr, int n, int m, int& row, int& col, int number) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mtr[i][j] == number) {
                row = i;
                col = j;
                break;
            }
        }
    }
    cout << row<<" " << col;
}
int main()
{
    int matrix[3][3] = { {1, 2, 3}, {2, 3, 4}, {3, 4, 5} };

    int i = -1, j = -1;

    int** mat = new int* [3];
    for (int i = 0; i < 3; ++i) {
        mat[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    findCoords(mat, 3, 3, i, j, 5);


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
