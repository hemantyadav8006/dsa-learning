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

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i) + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i) + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < (2 * (n - i) - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < (2 * (n - i) - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        space = space - 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    pattern12(n);
}
