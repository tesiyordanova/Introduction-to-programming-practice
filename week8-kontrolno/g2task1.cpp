// g2task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using namespace std;
const int max_size = 100;


int numberOfDigits(int n) {
	int counter = 1;
	if (n >= 0 && n <= 9) return counter;
	while (n > 9)
	{
		n = n / 10;
		counter++;
	}
	return counter;
}
int multiplieDigits(int n, int oneDigit) {
	int temp = n;
	int digit = 1;
	int result = 0;
	int multipliedTen = 1;
	int len = numberOfDigits(n);

	while (temp != 0)
	{
		digit = temp % 10;
		digit = digit * oneDigit;
		if (digit > 9)
		{
			digit = digit / 10;
		}

		result = result + (digit * multipliedTen);
		digit = 0;
		multipliedTen = multipliedTen * 10;
		temp = temp / 10;
	}
	return result;
}

int main()
{
	cout << "Enter a number to multiplie its digits:" << endl;
	int n; cin >> n;
	if (n < 0) cout << "Enter correct number";

	cout << "Enter a digit to multiplie with:" << endl;
	int oneDigit; cin >> oneDigit;
	if (oneDigit < 0 || oneDigit>9) cout << "Enter correct one digit!";

	cout << "Result: " << multiplieDigits(n, oneDigit);

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
