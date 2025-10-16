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

void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
        }
        c++;
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char c = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            cout << c;
            if (j <= breakPoint)
                c++;
            else
                c--;
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    char c = 'E';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c -= i;
        }
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
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    pattern18(n); // not completed!
}
