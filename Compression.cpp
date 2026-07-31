#include <iostream>
#include<vector>
#include<set>
using namespace std;
void solve() {
    int N;
    cin>>N;
   set<int> s;
   while(N--){
    int curr; cin>>curr;
    s.insert(curr);
   }
   cout<<s.size()<<endl;
for(int v:s){
    cout<<v<<" ";
}
 
}
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int tc=1;
while(tc--){
    solve();
}
return 0;
}
