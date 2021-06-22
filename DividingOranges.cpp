#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(k);
    int t[k][n];
    set<int> s;
    for(auto i=1;i<=n*k;i++){
        s.insert(i);
    }
    for(auto i=0;i<k;i++){
        cin>>a[i];
    }
    for(auto i=0;i<k;i++){
        t[i][0]=a[i];
        if(s.find(a[i])!=s.end()){
            s.erase(a[i]);
        }
    }
    vector<int> b{s.begin(),s.end()};
    int c=0;
    for(auto i=0;i<k;i++){
        for(auto j=1;j<n;j++){
            t[i][j]=b[c];
            c++;
        }
    }
    for(auto i=0;i<k;i++){
        for(auto j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}