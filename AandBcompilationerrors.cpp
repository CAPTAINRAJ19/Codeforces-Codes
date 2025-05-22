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
int n;
cin>>n;
int c=0;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    c+=a;
}
int c1=0;
for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
    c1+=a;

}
int c2=0;
for(int i=0;i<n-2;i++){
    int a;
    cin>>a;
    c2+=a;
}
cout<<c-c1<<"\n";
cout<<c1-c2;
}