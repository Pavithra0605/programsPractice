#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;
#define ll long long int
void solve(){
 int N;
 cin>>N;
   vector<int> arr(N);
   int oc=0;
   for(int i=0;i<N;i++){
    cin>>arr[i];
    oc+=arr[i];
   }
   int z=N-oc;
   if(z<2){
    cout<<-1<<"\n"; return;
   }
   int fin=0;
   if(arr[0]) in++;
   if(arr[N-1]) fin++;
   cout<<fin<<endl;
}
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while(T--) solve();
}
