// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void strcpyy(char* arr1, char* arr2) {
    for (int i = 0; arr1[i] != '\0'; ++i) {
        arr2[i] = arr1[i];
    }
}
void strcatt(char* arr1, char* arr2)
{
    char* start = arr1;
    while (*start != '\0')
    {
        start++;
    }
    while (*arr2 != '\0')
    {
        *start++ = *arr2++;
    }
    *start = '\0';
    cout<< arr1;
}
int strlen(char* arr) {
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        ++length;
    }
    return length;
}
int strcmpp( char* arr1, char* arr2)
{
    if (strlen(arr1) > strlen(arr2))
    {
        return 1;
    }
    else if (strlen(arr1) < strlen(arr2))
    {
        return -1;
    }
    else return 0;
}
void reverse(char* arr)
{
    int n = strlen(arr);

    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
void replace(char* arr, char symbol, char replaced)
{

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == symbol)
        {
            arr[i] = replaced;
        }
    }
}
int find(char* arr, char symbol) {
    for (int i = 0; arr[i]!='\0';  i++)
    {
        if (arr[i] == symbol)
        {
            return i;
            break;
        }
        
    }
    return -1;
}
int count(char* arr, char symbol)
{
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == symbol)
        {
            counter++;
        }
    }
    return counter;
}
char* substr(char* arr, int n, int m) {
  
    int size = (m - n) + 2;
    char* arr2 = new char[size];
    int j, i;
    for (i = n,j=0; i <= m; i++, j++)
    {
        arr2[j] = arr[i];
    }
    arr2[j] = '\0';
    return arr2;
    delete[] arr2;
}
bool strstr(char* arr1, char* arr2) {
    int n = strlen(arr1);
    int m = strlen(arr2);

    int j, i;
    for ( i = 0, j=0; i < m && j < n; i++) {
        if (arr1[j] == arr2[i])
        {
            j++;
        }
    }
    if (j == n) return true;
    else return false;
}
int main()
{
   /* cout << "Enter string: "<<endl;
    char arr1[10]; cin.getline(arr1,10);
    cout << "Enter string: " << endl;
    char arr2[10]; cin.getline(arr2, 10);
    cout << "Enter symbol: " << endl;
    char symbol; cin >> symbol;
    cout << "Enter symbol: " << endl;
    char replaced; cin >> replaced;
    cout << "Enter first index: " << endl;
    int n; cin >> n;
    cout << "Enter last index: " << endl;
    int m; cin >> m;
  
    strcpyy(arr1, arr2);
    strcatt(arr1, arr2);
    strlen( arr1);
    strcmpp(arr1, arr2);
    reverse(arr1);
    replace(arr1,symbol, replaced);
    find( arr1, symbol);
    count(arr1, symbol);
    substr(arr1, n, m);
    strstr(arr1, arr2);*/

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
