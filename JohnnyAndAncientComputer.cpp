#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        ll c=0;
        cin>>a>>b;
        ll a1=a,b1=b;
        if(a>b){
            int i=3;
            while(a>b && i>0){
                ll x=pow(2,i);
                if(a%x==0 && a/x>=b){
                    a=a>>i;
                    c++;
                }
                else{
                    i--;
                }
            }
            if(a1==a){
                c=-1;
            }
        }
        else if(b>a){
            int i=3;
            while(b>a && i>0){
                ll x=pow(2,i);
                if(b%x==0 && b/x>=a){
                    b=b>>i;
                    c++;
                }
                else{
                    i--;
                }
            }
            if(b1==b){
                c=-1;
            }
        }
        if(a1==b1)
            cout<<0<<endl;
        else if(a==b)
            cout<<c<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
