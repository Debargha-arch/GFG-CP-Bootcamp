#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int n,c=0;
    cin>>n;
    vector<int> v(n);
    for(auto i=0;i<n;i++){
        cin>>v[i];
    }
    for(auto i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            c++;
        }
    }
    cout<<c+1<<endl;
    return 0;
}