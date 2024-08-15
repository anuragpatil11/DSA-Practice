#include <bits/stdc++.h>

using namespace std;

void reverseArray(int A[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(A[s], A[e]);
        s++;
        e--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{

    int n = 7;
    int A[n] = {30, 10, 40, 20, 50, 70, 60};

    reverseArray(A, n);

    return 0;
}