#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n, string msg)
{
    if (msg == "")
    {
        cout << "Array elements : ";
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

// efficient approach (m+n)
void marge(int arr[], int arr2[], int n, int m)
{
    int temp[m + n];

    int i = 0, j = 0;
    int index = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= arr2[j])
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
        else
        {
            temp[index] = arr2[j];
            j++;
            index++;
        }
    }
    while (i < n)
    {
        temp[index] = arr[i];
        i++;
        index++;
    }
    while (j < m)
    {
        temp[index] = arr2[j];
        j++;
        index++;
    }

    printArray(temp, m + n, "Sorted marged elements are 2: ");
}

// naive approach (m+n)log(m+n)
void margenaive(int arr[], int arr2[], int n, int m)
{
    int temp[m + n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        temp[n + i] = arr2[i];
    }
    sort(temp, temp + m + n);
    printArray(temp, m + n, "Sorted marged elements are: ");
}

int main()
{
    int n;
    cout << "Enter number of elements for arr: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    int m;
    cout << "Enter number of elements for arr2: ";
    cin >> m;
    cout << endl;
    int arr2[m];
    cout << "Enter elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << endl;
    printArray(arr, n, "");
    printArray(arr2, m, "");

    margenaive(arr, arr2, n, m);
    marge(arr, arr2, n, m);
    return 0;
}