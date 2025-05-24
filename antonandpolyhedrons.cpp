#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
#define max(arr) *max_element(arr.begin(), arr.end())
#define min(arr) *min_element(arr.begin(), arr.end())
#define vecinput(v1, n)         \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v1.pb(x);               \
    }
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
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        string k = arr[i];
        if (k[0] == 'T')
        {
            temp += 4;
        }
        else if (k[0] == 'C')
        {
            temp += 6;
        }
        else if (k[0] == 'O')
        {
            temp += 8;
        }
        else if (k[0] == 'D')
        {
            temp += 12;
        }
        else if (k[0] == 'I')
        {
            temp += 20;
        }
    }
    cout << temp;
}