#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define int int64_t
signed main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    int temp = 0;
    int min = 0;
    int fans = pow(10, 9);
    int tempo;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp++;
        min += arr[i];
        if (temp == k)
        {
            if (min < fans)
            {
                fans = min;
                tempo = i - k + 2;
            }
            temp--;
            min -= arr[i - k + 1];
        }
    }
    cout << tempo;

    return 0;
}