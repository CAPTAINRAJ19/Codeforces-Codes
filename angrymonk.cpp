#include <bits/stdc++.h>
using namespace std;
/*#define int int64_t
#define mod 1000000007
#define max(arr)    *max_element(arr.begin(),arr.end())
#define min(arr)    *min_element(arr.begin(),arr.end())
#define vecinput(v1, n)  for(int i=0; i<n; i++) {int x; cin >> x; v1.pb(x);}//will have to define v1 before this statement
#define arrinput(arr, n) for(int i=0; i<n; i++) {cin >>arr[i];}//will have to define arr before this statement
#define reverse(v1)   reverse(v1.begin(), v1.end()) 
#define bsearch(a,n,s)   binary_search(a,a+n,s) // will return 1 or 0 ie true or false (array should be sorted)*/
/*int factorial(int n) {
if (n == 0 || n == 1) {
return (1);
}
int result = 1;
for (int i = 2; i <= n; i++) {
result *= i;
}
return result;
}
int nCr(int n, int r) {
return factorial(n) / (factorial(r) * factorial(n - r));
}
*/
signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int arr[k];
for(int i=0;i<k;i++){
    cin>>arr[i];
}
sort(arr,arr+k);
int ans=0;
for(int i=0;i<k-1;i++){
if(arr[i]==1){
    ans+=1;
}
else{
    ans+=arr[i]-1+arr[i];
}
}
cout<<ans<<"\n";
}
}