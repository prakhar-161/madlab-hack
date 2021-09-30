#include<iostream>
using namespace std;

/*
Task:
1. WAP tp print fibonacci series till n using recursion
*/

void printFiboSeries(int n)
{
    int a = 0, b = 1, i;
 
    if (n < 1)
        return;
    cout << a << " ";
    for (i = 1; i < n; i++) {
        cout << b << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;
    cout << "Enter value of n - ";
    cin >> n;

    printFiboSeries(n);
    return 0;
}
