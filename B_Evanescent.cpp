#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n==0){
            cout<<0<<endl;
            continue;
        }

        else if(n==1){
            cout<<1<<endl;
            continue;
        }
        int runs = 1;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                runs++;

        int ans = runs;

        for (int i = 1; i < n - 1; i++) {
            int cur = runs;

            if (s[i] != s[i - 1])
                cur--;
            if (s[i] != s[i + 1])
                cur--;
            if (s[i - 1] != s[i + 1])
                cur++;
            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}