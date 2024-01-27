#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    int s = 0;
    for (int k = 0; k < t; k++)
    {
        cin >> arr[k];
        s = s + arr[k];
    }
    float c = s / 2;
    sort(arr, arr + t);
    int temp = 0;
    for (int k = 0; k < t; k++)
    {
        temp = temp + arr[t - 1 - k];
        if (temp > c)
        {
            cout << k+1;
            break;
        }
    }
    return 0;
}