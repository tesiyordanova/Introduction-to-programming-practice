// g2task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int countMoves = 0;
    int countCombinations = 0;

    srand(time(NULL));
    while (true) {
        //roll the dices
        for (int i = 0; i < 5; ++i) {
            dices[i] = rand() % 6 + 1;
        }
        print(dices); //just to see if the rolls are correct
        //init the counter for dices' values
        int counter[6];
        for (int i = 0; i < 6; ++i) {
            counter[i] = 0;
        }
        //save the current dices' values
        for (int i = 0; i < 5; ++i) {
            ++counter[dices[i] - 1];
        }
        //check if you roll a combination
        bool flag = false; //Do we have combination in current roll
        for (int i = 0; i < 6; ++i) {
            if (counter[i] >= 3) {
                ++countCombinations;
                flag = true;
            }
        }
        //reset the flag if you don't have combination in current roll
        if (!flag) {
            countCombinations = 0;
        }

        ++countMoves;

        if (countCombinations == 3) {
            break;
        }
    }

    cout << "You made " << countMoves << " moves" << endl;
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
