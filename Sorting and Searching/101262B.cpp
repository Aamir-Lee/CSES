#include "bits/stdc++.h"
using namespace std;

string solve(int n, int k,string a){
    if(k > n)
        return "WRONGANSWER";
    if(k == n)
        return a;
    if(k == 0){
        string b(n,'z');
        for(int i=0;i<n;i++){
            if(a[i] == 'z') b[i] == 'y';
        }
        return b;
    }

    string b = a.substr(0,k);
    for(int i=k;i<n;i++){
        b += (a[i] == 'z') ? 'y' : 'z';
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,k;cin >> n >> k;
    string a; cin >> a;
    cout <<  solve(n,k,a);
    return 0;
}