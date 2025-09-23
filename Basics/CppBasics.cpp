// Generic skaleton of c++ code
#include <bits/stdc++.h>
using namespace std;

void printing()
{
    cout << "Hello, Hemant here!" << endl; // printing the string
    int x;
    cout << "Enter the Value: ";
    cin >> x; // input an int value
    cout << "You have entered: " << x << endl;
}

void dataType()
{
    // int, long, long long, float, double, string and getline, char
    // int
    int a = 10;

    // long
    long b = 1200;

    long long c = 150000000000;

    // float, double
    float d = 1.5;
    double e = 1.3;

    //  string
    string f;
    // cout << "Enter a string: ";
    // getline(cin, f); // it will take whole string in a varible untill a line break

    // cout << "String Entered: " << f << endl;

    // Char
    char g;
    // cin >> g;
    // cout << g << endl;
}

int checkAdult(int a)
{
    if (a <= 0 || a > 150)
    {

        cout << "INVALID AGE" << endl;
    }
    else if (a >= 18)
    {
        cout << "You are an adult!" << endl;
    }
    else
    {
        cout << "You are not Adult" << endl;
    }
}

int checkGrade(int a)
{
    if (a < 25)
    {
        cout << "F" << endl;
    }
    else if (25 <= a && a <= 44)
    {
        cout << "E" << endl;
    }
    else if (45 <= a && a <= 49)
    {
        cout << "D" << endl;
    }
    else if (50 <= a && a <= 59)
    {
        cout << "C" << endl;
    }
    else if (60 <= a && a <= 79)
    {
        cout << "B" << endl;
    }
    else if (80 <= a && a <= 100)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "INVALID MARKS!" << endl;
    }
}

int checkDay(int a)
{
    switch (a)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "INVALID DAY NUMBER!";
        break;
    }
}

int looping(int n)
{
    // for loop
    for (int i = 1; i <= n; i++)
    {
        cout << "Hemant ";
    }

    int i = 1;

    // while loop
    while (i <= n)
    {
        cout << "Hemant ";
        i++;
    }

    // do while loop
    do
    {
        cout << "Hemant "; // 1st run by default then check the condition
        i++;
    } while (i <= n);
}

void doSomething1(int n) // pass by value
{
    n += 10;
    cout << "n1: " << n << endl;
}

void doSomething2(int &n) // pass by reference
{
    n += 10;
    cout << "n2: " << n << endl;
}

void printingArray(int arr[], int n) // always pass by reference
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // printing();
    // dataType();
    // int a;
    // cout << "Enter your age: ";
    // cout << "Enter your marks: ";
    // cout << "Enter your Day Number: ";
    // cin >> a;

    // checkAdult(a);
    // checkGrade(a);
    // checkDay(a);

    // looping(0);

    // int x = 10;
    // doSomething1(x);
    // doSomething2(x);
    // cout << "x: " << x;

    // array
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    printingArray(arr, n);

    return 0;
}
