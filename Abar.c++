#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define int int64_t
signed main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        string j = arr[i];
        if (j == "RUM")
        {
            c++;
        }
        else if (j == "RUM" || j == "ABSINTH" || j == "WINE")
        {
            c++;
        }
        else if (j == "GIN" || j == "BRANDY" || j == "TEQUILA" || j == "VODKA" || j == "WHISKY")
        {
            c++;
        }
        else if (j == "CHAMPAGNE" || j == "SAKE")
        {
            c++;
        }
        string p = arr[i];
        if (p[0] == '0' || p[0] == '1' || p[0] == '2' || p[0] == '3' || p[0] == '4' || p[0] == '5' || p[0] == '6' || p[0] == '7' || p[0] == '8' || p[0] == '9')
        {
            if (stoi(p) < 18)
            {
                c++;
            }
        }
    }
    cout << c;
}