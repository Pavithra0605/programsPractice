#include <iostream>
#include<vector>
using namespace std;

int main() {
    //Your Code goes here!
    int N,M; cin>>N>>M;
    vector<int> psum(N+2,0);
    while(M--){
        int from,to; cin>>from>>to;
        psum[from]++;
        psum[to +1]--;

    }
    int mini=300000;
    for(int w=1;w<N+1;w++){
        psum[w]+=psum[w-1];
        mini =min(mini,psum[w]);
    }
    cout<<mini<<endl;

    return 0;
}
