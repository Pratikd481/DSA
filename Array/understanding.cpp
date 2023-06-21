#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Array size within a funciton. : Its actually the size of the address. Because if we pass array in a fucntion its basically pass the address of the first element:" << sizeof(arr) << endl;
    cout << "access array by pointer: " << *(arr + 1) << endl;
    cout << "access array by array syntax: " << arr[1] << endl;
    cout << "access array after understanding  array syntax and pointer: " << 1 [arr] << endl;

    cout << "Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    cout << "Array size within main:" << sizeof(arr) << endl;
    printArray(arr, n);
    return 0;
}