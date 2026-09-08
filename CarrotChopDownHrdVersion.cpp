
ALLAMPATI SNEHA LATHA (RMD AIML DEPT - 2025) <25al005@rmd.ac.in>
12:45 PM (45 minutes ago)
to me

#include<iostream>
 #include<vector>
 using namespace std;
 #define ll long long int
 
 int main(){
 int l; cin>>l;
 int n,m;
 while(l--){
        cin>>n>>m;
 vector<int> cnt(m+1,0), psum(m+1,0);
 for(int ctr=1; ctr<= n ; ctr++){
    int curr; cin>>curr;
    cnt[curr]++;
 }
 //vector<int> psum(m+1,0);
 for(int cl=1;cl<=m ; cl++){
    psum[cl] = psum[cl-1] + cnt[cl];
 }
 vector<ll> ans(m+1,0);
 for(int cut=1;cut<=min(m,18);cut++){
     ll maxc=0;
 for(int x=1;x<=m; x++){
        ll currc=0;
        for(int mul=1;mul * x<= m; mul++){
            int lt = mul * x, rt = lt + x -1;
            currc += min(1LL*mul,(1LL << cut)-1) * (psum[min(rt,m)] - psum[lt-1]);
        }
if((1LL << cut) * x <= m){
    currc += cnt[(1LL<<cut) * x];
}
 maxc = max(maxc,currc);
 }
 ans[cut] = maxc;
 }
 for(int cut=1; cut <= m ; cut++){
    cout<< ans[min(cut,18)] << (cut == m?"\n":" ");
 }
 } }
