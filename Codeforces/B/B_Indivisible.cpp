#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    ll n; cin>>n;
    vi v;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    
    for(ll i=1;i<=n;i++){
        v.push_back(i);
    }

    if(((n*(n+1))/2)%n==0){
        cout<<-1<<endl;
        return;
    }

    for(ll i=0;i<n-1;i+=2){
        swap(v[i],v[i+1]);
    }

    vout; cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}