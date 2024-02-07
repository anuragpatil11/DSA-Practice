#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fibonacci series
    // 0 1 1 2 3 5 8 13 21 34 .....
    int n;
    cout << "Enter N: ";
    cin >> n;
    int n1 = 0;
    int n2 = 1;
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNum = n1 + n2;
        cout << nextNum << " ";

        // swapping of values from n2 to n1 and nexNum to n2
        n1 = n2;
        n2 = nextNum;
    }

    return 0;
}