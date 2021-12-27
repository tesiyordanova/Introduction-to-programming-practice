// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 20;

void fillMatrix(int matr[][max_size], int size1,int size2) {
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << "matr["<<i<<"]["<<j<<"]=";
			cin >> matr[i][j];
		}
	}
}
void printMatrix(int matr[][max_size], int size1, int size2) {
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << matr[i][j]<<" ";
		}
		cout << endl;
	}
}
int findEqual(int matr[][max_size], int arr[], int size1, int size2,int size3) {

	int counter = 0;
	int max = 0;
	int col = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2 && j<size3; j++)
		{
			if (matr[j][i]==arr[i])
			{
				counter++;
			}
		}
		if (counter > max)
		{
			max = counter;
			col = i;
		}
		counter = 0;
	}
	return col;
}
int main()
{
	int matr[max_size][max_size];
	int size1; cin >> size1;
	int size2; cin >> size2;
	fillMatrix(matr, size1, size2);
	printMatrix(matr, size1, size2);

	cout << endl;

	int arr[max_size];
	int size3; cin >> size3;
	for (int i = 0; i < size3; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	cout << "Col:"<<findEqual(matr, arr, size1, size2, size3);
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
