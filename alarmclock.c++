#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define int int64_t
signed main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int time = 0;
        if (a <= b)
        {
            cout << b<<"\n";
        }
        else
        {
            time += b;
            if (c <= d)
            {
                cout << -1<<"\n";
            }
            else
            {
                time+=c*((a-b)/(c-d));
                if((a-b)%(c-d)!=0){
                    time+=c;
                }
                cout<<time<<"\n";
            }
            
        }
    }
}