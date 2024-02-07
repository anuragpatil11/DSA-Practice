#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: " << endl;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {

        int bit = n & 1; // AND of n with 1
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1; // right shift
        i++;
    }
    cout << ans;

    return 0;
}