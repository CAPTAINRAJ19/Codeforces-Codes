#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string p = "hello";
    int temp = -1;
    int c = 0;
    for (int i = 0; i < p.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (p[i] == s[j] && j > temp)
            {
                c++;
                temp = j;
                break;
            }
        }
    }
    if (c == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}