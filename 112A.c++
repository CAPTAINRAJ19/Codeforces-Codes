#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l=s1.length();
    int temp=0;
    for (int i=0;i<l;i++){
        if(int(s1[i])>=97&&int (s1[i])<=122){
            s1[i]=char(int(s1[i])-32);
        }
        if(int(s2[i])>=97&&int (s2[i])<=122){
            s2[i]=char(int(s2[i])-32);
        }
    }
    for(int i=0;i<l;i++){
        if(int (s1[i])>int(s2[i])){
            temp=1;
            cout<<temp;
            break;
        }
        else if(int (s1[i])<int(s2[i])){
            temp=-1;
            cout<<temp;
            break;
        }
    }
    if(temp==0){
        cout<<0;
    }
return 0;
}