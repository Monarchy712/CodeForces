#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int one=0,two=0, three=0, four=0;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) one++;
        else if(arr[i]==2) two++;
        else if(arr[i]==3) three++;
        else if(arr[i]==4) four++;
    }
    int taxis = four;
    int pair31 = min(one,three);
    taxis += three;
    one -= pair31;

    while(two>0){
        if(two==1) break;
        two-=2;
        taxis++;
    }
    
    if(two>0) {
        taxis++;
        one-=2;
    }
    if(one>0 && one%4==0) taxis+= one/4;
    else if(one>0) taxis+= (1+one/4);

    cout<<taxis;
      
}