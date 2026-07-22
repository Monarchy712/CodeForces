#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int out=0;
    while(n--){
        int sum=0;
        int o,t,tt;
        cin>>o>>t>>tt;
        if(o==1) sum++;
        if(t==1) sum++;
        if(tt==1) sum++;
        if(sum>=2) out++;
    }
    cout<<out;
}