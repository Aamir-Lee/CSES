#include "bits/stdc++.h"
using namespace std;
using ll=long long; 
#define endl '\n'
 
void solve(){
    string s;cin>>s;
    int n=s.size();
    
    int maxi=1, count=1;
    for(int i=1;i<n;i++){
        s[i]==s[i-1] ? count++ : count=1;
        maxi=max(maxi, count);
    }
    cout << maxi<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcs=1;
    while(tcs--)
        solve();
    return 0;
}