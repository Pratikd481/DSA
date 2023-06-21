#include <bits/stdc++.h>
using namespace std;

// O(n^2)
int select(int arr[], int i, int n)
{
    int min_ind = i;
    for (int j = i; j < n; j++)
    {
        if (arr[j] < arr[min_ind])
        {
            min_ind = j;
        }
    }
    return min_ind;
}

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int ind = select(arr, i, n);
        swap(arr[i], arr[ind]);
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
    SelectionSort(arr, n);
    printArray(arr, n);
    return 0;
}