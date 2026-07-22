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

    
    
    
    taxis += two/2;
    two %=2;
    
    if(two>0) {
        taxis++;
        one = max(0,one-2);
    }

    
    taxis += (one+3)/4;

    cout<<taxis;
      
}