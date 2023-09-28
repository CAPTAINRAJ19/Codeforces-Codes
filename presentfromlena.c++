#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define int int64_t
#define mod 1000000007
#define test   \
    int64_t t; \
    cin >> t;  \
    while (t--)
#define max(arr) *max_element(arr.begin(), arr.end())
#define min(arr) *min_element(arr.begin(), arr.end())
#define vecinput(v1, n)         \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v1.pb(x);               \
    }
#define upper(v1, k) upper_bound(v1.begin(), v1.end(), k) //(array should be sorted) just greater
#define lower(v1, k) lower_bound(v1.begin(), v1.end(), k) //(array should be sorted) equal to or greater
#define arrinput(arr, n)        \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define reverse(v1) reverse(v1.begin(), v1.end())
#define bsearch(a, n, s) binary_search(a, a + n, s) // will return 1 or 0 ie true or false (array should be sorted)
signed main()
{
    int n;
    cin >> n;
    int temp = 2 * n;
    int tempo = 0;
    for (int i = 0; i < (2 * n) + 1; i++)
    {
        if (i > n)
        {
            temp += 2;
            for (int j = 0; j < temp - 1; j++)
            {
                cout << " ";
            }
            tempo--;
            for (int j = 0; j < tempo; j++)
            {
                cout << " " << j;
            }
            for (int j = tempo; j >= 0; j--)
            {
                cout << " " << j;
            }
            cout << "\n";
        }

        else if (i < n)
        {
            for (int j = 0; j < temp - 1; j++)
            {
                cout << " ";
            }
            temp -= 2;
            for (int j = 0; j < tempo; j++)
            {
                cout << " " << j;
            }
            for (int j = tempo; j >= 0; j--)
            {
                cout << " " << j;
            }
            cout << "\n";
            tempo++;
        }
        if (i == n)
        {
            temp -= 2;
            for (int j = 0; j < tempo; j++)
            {
                if (j == 0)
                {
                    cout << j;
                }
                else
                {
                    cout << " " << j;
                }
            }
            for (int j = tempo; j >= 0; j--)
            {
                cout << " " << j;
            }
            cout << "\n";
            tempo++;
            temp += 2;
            tempo--;
        }
    }
}