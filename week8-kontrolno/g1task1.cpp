// g1task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int transformNumber(int number, int k) {
    int copyNumber = number;
    int size = 0;
    while (copyNumber > 0) {
        copyNumber /= 10;
        ++size;
    }

    for (int i = 0; i < size; ++i) {
        int changedDigit = number % (int)pow(10, i + 1) / (int)pow(10, i);
        changedDigit = changedDigit + k > 9 ? (changedDigit + k) % 10 : changedDigit + k;
        copyNumber += changedDigit * (int)pow(10, i);
    }

    return copyNumber;
}

int main() {
    int number; cin >> number;
    int digit; cin >> digit;
    cout << transformNumber(number, digit) << endl;

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
