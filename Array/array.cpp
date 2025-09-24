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
}

int secondSmallestElementInArray(int arr[], int n)
{
}

int main()
{
    int n = 5;
    int arr[n] = {1, 5, 2, 6, 3};
    // int value = largestElementInArray(arr, n);
    // cout << "Largest Value of the Given Array is: " << value << endl;
    return 0;
}
