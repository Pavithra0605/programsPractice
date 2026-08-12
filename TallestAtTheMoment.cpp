#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    //Your Code goes here!
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        int ht,lt;cin>>ht>>lt;
        arr[i]= make_pair(ht,lt);
    }
    sort(arr.begin(),arr.end(),greater<>());
    int prev =0;
    vector<int> ltarr, htarr;
    for(auto[ht,lt]:arr){
        if(lt>prev){
            prev=lt;
            ltarr.push_back(lt);
            htarr.push_back(ht);
        }
    }

    int q;cin>>q;
    while(q--){
int t;cin>>t;
auto it=upper_bound(ltarr.begin(),ltarr.end(),t);
int idx=it-ltarr.begin();
cout<<htarr[idx]<<endl;
    }
    return 0;
}
