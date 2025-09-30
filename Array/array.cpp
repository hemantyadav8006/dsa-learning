#include <bits/stdc++.h>
using namespace std;

int largestElementInArray(int arr[], int n)
{
    int largest = 1;            // space complexity O(1)
    for (int i = 0; i < n; i++) // time complexity O(n)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int secondLargestElementInArray(int arr[], int n)
{
    sort(arr, arr + n);
    int largest = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            return arr[i];
        }
    }
    return -1;
}

int secondSmallestElementInArray(int arr[], int n)
{
}

int main()
{
    int n = 5;
    int arr[n] = {1, 5, 2, 6, 3};
    // int value = largestElementInArray(arr, n);
    int value = secondLargestElementInArray(arr, n);
    // cout << "Largest Value of the Given Array is: " << value << endl;
    cout << "Second Largest Value of the Given Array is: " << value << endl;
    return 0;
}
