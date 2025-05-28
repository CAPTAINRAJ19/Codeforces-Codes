#include <bits/stdc++.h>
using namespace std;
int main(){
int64_t k;
cin>>k;
int arr[12];
for(int i=0;i<12;i++){
    cin>>arr[i];
}
sort(arr,arr+12);
int temp=0;
int c=0;
for(int i=11;i>=0;i--){
    if(temp>=k){
        break;
    }
    temp=temp+arr[i];
    c++;
}
if(temp<k){
    cout<<-1;
}
else{
    cout<<c;
}

return 0;
}