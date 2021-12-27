// g2task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;

void fillArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
void printArray(int arr[], int n) {
	cout << "[";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}
int main()
{
	cout << "Enter a number under or equal to 1000:" << endl;
	int n; cin >> n;
	if (n > 1000 || n < 0)
	{
		cout << "Enter correct number!";
	}

	int arr[max_size];
	cout << "Enter elements:" << endl;
	fillArray(arr, n);
	printArray(arr, n);

	int numberInvers = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				numberInvers++;
			}
		}
	}
	cout << "Number of inversians: " << numberInvers << endl;
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
