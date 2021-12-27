// g1task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print(int arr[]) {
    for (int i = 0; i < 5; ++i) {
        cout << arr[i];
    }
    cout << endl;
}

void yahtzee() {
    int dices[5];
    bool combinations[6];
    int countMoves = 0;
    
    for (int i = 0; i < 6; ++i) {
        combinations[i] = false;
    }

    srand(time(NULL));
    while (true) {
        ++countMoves;

        for (int i = 0; i < 5; ++i) {
            dices[i] = rand() % 6 + 1;
        }

        print(dices); 
        int counter[6];
        for (int i = 0; i < 6; ++i) {
            counter[i] = 0;
        }
      
        for (int i = 0; i < 5; ++i) {
            ++counter[dices[i] - 1];
        }
       
        for (int i = 0; i < 6; ++i) {
            if (counter[i] >= 3) {
                combinations[i] = true;
                break;
            }
        }

       
        bool flag = true;
        for (int i = 0; i < 6; ++i) {
            if (!combinations[i]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            break;
        }

    }
    cout << "You roll " << countMoves << " times the dices" << endl;
}

int main() {
    yahtzee();

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
