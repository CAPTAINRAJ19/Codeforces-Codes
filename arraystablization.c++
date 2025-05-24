#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define int int64_t
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (arr[n - 2] - arr[0] < arr[n - 1] - arr[1])
    {
        cout << arr[n - 2] - arr[0];
    }
    else
    {
        cout << arr[n - 1] - arr[1];
    }
}