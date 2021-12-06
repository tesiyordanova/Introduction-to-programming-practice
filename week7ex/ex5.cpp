// ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;

int length(char arr[]) {
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        ++counter;
    }
    return counter;
}
bool isPalindrome(char arr[]) {
    int size = length(arr);
    for (int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        if (arr[i] != arr[j]) {
            cout << "NO" << endl;
            return false;
        }
    }
    cout << "YES" << endl;
    return true;
}
int main()
{
    char arr[max_size]; cin >> arr;
    isPalindrome(arr);


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
