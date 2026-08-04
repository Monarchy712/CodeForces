#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int rounds = 0;
        while((a!=b)&&(b!=c)&&(c!=a)){
            if(a>b){
                if(a>c){
                    if(b>c){
                        a--;
                        c++;
                    }
                    else{
                        a--;
                        b++;
                    }
                }
                else{
                    b++;
                    c--;
                }
            }
            else{
                if(b>c){
                    if(a>c){
                        c++;
                        b--;
                    }
                    else{
                        b--;
                        a++;
                    }
                }
                else{
                    c--;
                    a++;
                }
            }
            rounds++;
        }
        cout<<rounds<<endl;
    }
    return 0;
}