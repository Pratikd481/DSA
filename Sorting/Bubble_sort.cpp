#include <bits/stdc++.h>
using namespace std;

// O(n^2)
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        bool swaped = false;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (swaped == false)
        {
            break;
        }
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
    BubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}