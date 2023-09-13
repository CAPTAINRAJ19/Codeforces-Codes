#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;
#define int int64_t
signed main(){
string s1,s2,s3;
cin>>s1>>s2>>s3;
int arr[26];
for(int i=0;i<26;i++){
    arr[i]=0;
}
for(int i=0;i<s1.length();i++){
    arr[int(s1[i])-65]++;
}
for(int i=0;i<s2.length();i++){
    arr[int(s2[i])-65]++;
}
for(int i=0;i<s3.length();i++){
    arr[int(s3[i])-65]--;
}
for(int i=0;i<26;i++){
    if(arr[i]!=0){
        cout<<"NO";
        break;
    }
    else if(i==25){
        cout<<"YES";
    }
}


}