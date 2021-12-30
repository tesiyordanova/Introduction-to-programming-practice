﻿// ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void findMinMax(int* arr, int size, int& min, int& max) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}
int main()
{
    int arr[10];
    int size; cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int a = 0;
    int b = 0;
    findMinMax(arr, size, a, b);
    cout << a << " " << b;

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
