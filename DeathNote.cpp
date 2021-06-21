#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> t;
    int count=0;
    for(auto i=0;i<n;i++){
        cin>>a[i];   
        int k=(count+a[i])/m;
        t.push_back(k);
        count=(count+a[i])%m;
    }
    for(auto i=0;i<n;i++){
        cout<<t[i]<<" ";
    }
    return 0;
}