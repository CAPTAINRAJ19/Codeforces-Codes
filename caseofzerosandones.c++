#include <bits/stdc++.h>
using namespace std;
int main(){
int64_t n;
cin>>n;
string s;
cin>>s;
for(int i=0;i<s.length()-1;i++){
    if(s.length()==2){
        break;
    }
    if(s[i]!=s[i+1]){
        s.erase(i,2);
        if(i==0||i==1){
            i=-1;
        }
       else{
        i=i-2;
       }
    }
}
if(s.length()==2){
        if(s[0]!=s[1]){
            cout<<0;
        }
        else{
            cout<<2;
        }
    }
else{
    cout<<s.length();
}


return 0;
}