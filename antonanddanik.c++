#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define int int64_t
signed main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}