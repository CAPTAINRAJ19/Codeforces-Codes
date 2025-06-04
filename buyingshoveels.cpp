#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
#define max(arr)    *max_element(arr.begin(),arr.end())
#define min(arr)    *min_element(arr.begin(),arr.end())
#define vecinput(v1, n)  for(int i=0; i<n; i++) {int x; cin >> x; v1.pb(x);}//will have to define v1 before this statement
#define arrinput(arr, n) for(int i=0; i<n; i++) {cin >>arr[i];}//will have to define arr before this statement
#define reverse(v1)   reverse(v1.begin(), v1.end()) 
#define bsearch(a,n,s)   binary_search(a,a+n,s) // will return 1 or 0 ie true or false (array should be sorted)
signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
if(n<k){
    cout<<1<<"\n";
}
else{
    for(int i=k;i>=1;i--){
        if(n%k==0){
            cout<<(n/k)<<"\n";
            break;
        }
    }
}
}
}