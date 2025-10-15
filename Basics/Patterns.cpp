// Pattern Problems checklist
// 1. outer loop denotes no. of rows and inner loop denotes no. of columns
// 2. for the inner loop, focus on columns and try to connect them somehow to the rows
// 3. print * inside the inner loop
// 4. Observe symmetry (optional)

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    pattern1(n);
}