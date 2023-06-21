#include <bits/stdc++.h>
using namespace std;

/**
 * Merge Sort is a sorting algorithm that divides the given array into two halves,
 * sorts them independently, and then merges the sorted halves to produce a sorted output.
 */

void Merge(int arr[], int low, int mid, int high)
{
    // Calculate the sizes of the two subarrays
    int n = mid - low + 1; // Size of the left subarray
    int m = high - mid;    // Size of the right subarray

    // Create temporary arrays to store the left and right subarrays
    int left[n], right[m];

    // Copy elements from the original array to the temporary left and right subarrays
    for (int i = 0; i < n; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < m; i++)
    {
        right[i] = arr[mid + i + 1];
    }

    // Merge the two subarrays back into the original array in a sorted order
    int i = 0, j = 0, k = low; // i points to the current element in the left subarray,
                               // j points to the current element in the right subarray,
                               // k points to the current position in the original array

    while (i < n && j < m)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i]; // Take the smaller element from the left subarray
            i++;
        }
        else
        {
            arr[k] = right[j]; // Take the smaller element from the right subarray
            j++;
        }
        k++;
    }

    // Copy the remaining elements from the left subarray, if any
    while (i < n)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements from the right subarray, if any
    while (j < m)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int n, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        // Divide the array into two halves and recursively sort them
        MergeSort(arr, n, low, mid);
        MergeSort(arr, n, mid + 1, high);

        // Merge the two sorted halves
        Merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int n, string msg)
{
    if (msg == "")
    {
        cout << "Array elements: ";
    }
    else
    {
        cout << msg;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    printArray(arr, n, "Original array: ");

    int low = 0;
    int high = n - 1;

    // Sort the array using Merge Sort
    MergeSort(arr, n, low, high);

    printArray(arr, n, "Sorted array: ");
    return 0;
}
