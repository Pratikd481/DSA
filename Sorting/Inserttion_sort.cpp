#include <bits/stdc++.h>
using namespace std;

void InserttionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
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
    printArray(arr, n);
    InserttionSort(arr, n);
    printArray(arr, n);
    return 0;
}