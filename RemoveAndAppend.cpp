#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N,Q; cin>>N>>Q;
    vector<int> arr(N+1,0);
    for(int i=0;i<N;i++){
        int curr;cin>>curr;
        arr[curr]=i;
    }
    int nxtp=N+1;
    while(Q--){
        int val;cin>>val;
        arr[val]=nxtp++;
    }
    vector<pair<int,int>> pos;
    for(int val=1;val<=N;val++){
        pos.push_back(make_pair(arr[val],val));
    }
    sort(pos.begin(),pos.end());
    for(auto[posi,val]:pos){
        cout<<val<<" ";
    }
    cout<<endl;
    
}
