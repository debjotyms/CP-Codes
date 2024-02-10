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
    vi v(n); vin;

    ll lowest=LONG_LONG_MAX, highest=LONG_LONG_MIN;
    ll res = v[0];
    // for(auto x:v){
    //     lowest = min(lowest, x);
    //     highest = max(highest, x);
    // }

    // cout<<(lowest&highest)<<endl;

    for(ll i=1;i<n;i++){
        res&=v[i];
    }
    cout<<res<<endl;
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