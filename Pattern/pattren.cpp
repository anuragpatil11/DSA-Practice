
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter n:\n";
    cin >> n;
    // cout << n;
    int count=1;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //         // cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}
