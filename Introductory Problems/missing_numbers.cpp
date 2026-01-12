#include "bits/stdc++.h"
using namespace std;
using ll=long long; 
#define endl '\n'
 
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    
    int xorTotal=0;
    for(int i=1;i<=n;i++){
        xorTotal^=i;
    }
    
    int arrayXor=0;
    for(int i=0;i<n-1;i++){
        arrayXor^=a[i];
    }
    
    cout <<  (xorTotal^arrayXor) << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcs=1;
    while(tcs--)
        solve();
    return 0;
}