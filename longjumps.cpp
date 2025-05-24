#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
#define vecinput(v1, n)  for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}//will have to define v1 before this statement
#define arrinput(arr, n) for(int i=0; i<n; i++) {cin >>arr[i];}//will have to define arr before this statement
#define reverse(v1)   reverse(v1.begin(), v1.end()) 
#define bsearch(a,n,s)   binary_search(a,a+n,s) // will return 1 or 0 ie true or false (array should be sorted)
signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int maxscore=INT_MIN;
vector<int>v;
vecinput(v,n);
for(int j=0;j<n;j++){
    if(v[j]==-1){
        continue;
    }
    else{
        int sc=0;
        int i=j;
        while(i<n){
            if(v[i]==-1){
                break;
            }
            sc+=v[i];
            int temp=v[i];
            v[i]=-1;
            i+=temp;
        }
        if(sc>maxscore){
            maxscore=sc;
        }
    }
}
cout<<maxscore<<"\n";

}
}