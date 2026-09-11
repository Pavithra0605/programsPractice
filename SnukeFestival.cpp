#include <iostream>
#include <vector>
#include<algorithm>
#define ll long long int
using namespace std;

void solve(){
	int n; cin>>n;
	vector<int> u(n), m(n), l(n);
	for(int i=0; i<n; i++) cin>>u[i];
	for(int i=0; i<n; i++) cin>>m[i];
	for(int i=0; i<n; i++) cin>>l[i];
	sort(u.begin(), u.end());
	sort(m.begin(), m.end());
	sort(l.begin(), l.end());
	vector<ll> pmid(n,0);
	for(int i=0; i<n;i++){
		auto it=upper_bound(l.begin(),l.end(),m[i]);
		if(it!=l.end()){
			pmid[i]=l.end()-it;
		}
	}
	for(int i=1;i<n;i++) pmid[i]+=pmid[i-1];
	ll ans=0;
	for(int i=0; i<n; i++){
		auto it=upper_bound(m.begin(), m.end(), u[i]);
		if(it!=m.end()){
			int midx=it-m.begin();
			ans+=pmid[n-1]-(midx==0?0:pmid[midx-1]);
		}
	}
	cout<<ans<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc=1;//cin>>tc;
	while(tc--) solve();
}
