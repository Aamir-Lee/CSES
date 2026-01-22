#include "bits/stdc++.h"
using namespace std;
using ll=long long; 
#define endl '\n'
#define CIEL(a, b) (((a)+(b)-1)/(b))
#define p pair<int, int>
 
void solve(){
    string s;cin>>s;
    vector<int> freq(26, 0);
    for(char c: s) freq[c-'A']++;
    
    int oddCount=0, oddIndex=-1;
    for(int i=0;i<26;i++){
        if(freq[i]%2!=0){
            oddCount++;
            oddIndex=i;
        }
    }
    
    if(oddCount>1){
        cout << "NO SOLUTION\n";
        return;
    }
    
    string left="";
    char middle='\0';
    
    for(int i=0;i<26;i++){
        string temp(freq[i]/2, (char)('A'+i));
        
        left+=temp;
        if(i==oddIndex){
            middle=(char)('A'+i);
        }
    }
    string right=left;
    reverse(right.begin(), right.end());
    
    if(oddIndex!=-1){
        cout<<left<<middle<<right<<endl;
    }else{
        cout<<left<<right<<endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcs=1;
    while(tcs--)
        solve();
    return 0;
}