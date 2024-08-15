#include <bits/stdc++.h>

using namespace std;

int mostWaterContainer(int arr[], int len)
{
    int i = 0;
    int j = len - 1;
    int maxArea = 0;
    while (i < j)
    {
        maxArea = max(maxArea, (min(arr[i], arr[j]) * (j - 1)));

        if (arr[i] < arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return maxArea;
}

int main()
{
    int n = 4;
    int arr[n] = {2, 5, 4, 3};
    int Area = mostWaterContainer(arr, n);
    cout << Area;
    return 0;
}