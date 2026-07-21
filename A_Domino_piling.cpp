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
        int mx = max(n, m);
        int mn = min(n, m);

        cout << ((mx - 1) >> 1) * mn + (mn >> 1);;
    }
}