#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;
#define ll long long int
void solve(){
   ll x,y,z;
    cin>>x>>y>>z;
    ll ans=0, ctr =0;
    while(ctr<z){
        ll rem=(y+ctr)%(x+ctr);
        if (rem == y-x)break;
        ans+=rem; ctr++;
    }
   if(z>ctr){
    ans+=(z-ctr)*(y-x);
   }
   cout<<ans<<endl;}
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while(T--) solve();
}
