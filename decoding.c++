#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;
#define int int64_t
signed main(){
int n;
cin>>n;
string s;
cin>>s;
string s1="";
if(n%2==0){
    for(int i=0;i<n;i++){
        if(i%2==0){
            s1+=s[i];
        }
        else{
            s1=s[i]+s1;
        }
    }
     for(int i=0;i<n;i++){
        cout<<s1[n-1-i];
    }
}
else{
        for(int i=0;i<n;i++){
        if(i%2==0){
            s1=s[i]+s1;
        }
        else{
            s1+=s[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<s1[n-1-i];
    }

}

}