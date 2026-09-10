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
    ll ans=0, count =0;
    while(count<z){
        ll rem=(y+count)%(x+count);
        if (rem == y-x)break;
        ans+=rem; count++;
    }
   if(z>count){
    ans+=(z-count)*(y-x);
   }
   cout<<ans<<endl;}
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while(T--) solve();
}
