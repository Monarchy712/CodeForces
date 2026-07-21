#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n%2==0){
        cout<<(n/2)*m;
    }
    else if(m%2==0){
        cout<<(m/2)*n;
    }
    else{
        cout<<((((max(n,m))-1)/2)*min(n,m)) + (min(n,m)/2);
    }
}