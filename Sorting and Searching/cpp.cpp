#include "bits/stdc++.h"
#define F first
#define S second
#define PB push_back
#define mp make_pair
#define REP for(int i=a;i<=b;i++)
typedef long long int ll;

using namespace std;

void bubbleSort(vector<int>&v){
    int n = v.size();
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(v[i] < v[j])
                swap(v[i],v[j]);
}

void insetionSort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        int key = v[i];
        int j = i-1;
        while(j>=0 && v[j] > key){
            
        }
    }
}


int main() {
   vector<int> v = {9,8,7,6,5,4,3,2,1};
   for(auto& x:v) cout << x << " ";
   cout << '\n';
   insetionSort(v);
   for(auto& x:v) cout << x << " ";
   cout << '\n';
    return 0;
}
