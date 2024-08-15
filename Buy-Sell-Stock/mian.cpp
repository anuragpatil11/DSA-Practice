#include <bits/stdc++.h>

using namespace std;

int stockProfit(int A[], int n)
{
    int profit=0;
    int buyStock=A[0];

    for(int i=1;i<n;i++){
        if(A[i]<buyStock){
            buyStock=A[i];
        }
        profit=max(profit,A[i]-buyStock);
    }
   return profit;
}

int main()
{

    int n = 7;
    int A[n] = {11,9,1,11,1,13,2};

    int sellProfit=stockProfit(A, n);
    cout<<"The Profit is: ";
    cout<<sellProfit;
    return 0;
}