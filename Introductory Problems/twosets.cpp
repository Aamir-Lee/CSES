#include "bits/stdc++.h"
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    ll sum=n*(n+1)/2;

    if(sum&1){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<int>set1, set2;
    ll target=sum>>1;

    for(int i=n;i>=1;i--){
        if(target-i >= 0){
            set1.push_back(i);
            target -= i;
        }else{
            set2.push_back(i);
        }
    }
    
    cout << set1.size() << '\n';
    for(int set: set1) cout << set << " ";
    cout << '\n' << set2.size() << '\n';
    for(int set: set2) cout << set << " ";
    cout << '\n';

    
    return 0;
}