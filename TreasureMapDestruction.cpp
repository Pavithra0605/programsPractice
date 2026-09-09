#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;
#define ll long long int

const ll MOD = 1000000007;
const int MAXN = 200005;

ll fib[MAXN];

void solve(){
    int n;cin>>n;
    vector<int> arr(n+1),psum(n+2,0);

    for(int i=1;i<=n;i++){
        cin>>arr[i];

        if(arr[i]>0){
            int l=max(1,i-arr[i]+1);
            int r=min(n,i+arr[i]-1);

            psum[l]++;
            psum[r+1]--;
        }
    }

    for(int i=1;i<=n;i++){
        psum[i]+=psum[i-1];
    }

    vector<int> forced(n+1,0);

    for(int i=1;i<=n;i++){
        if(arr[i]!=-1){
            int d=arr[i];
            int cnt=0;

            if(i-d>=1 && psum[i-d]==0)
                cnt++;

            if(i+d<=n && psum[i+d]==0)
                cnt++;

            if(cnt==0){
                cout<<"0"<<endl;
                return;
            }

            if(cnt==1 || d==0){
                if(i-d>=1 && psum[i-d]==0)
                    forced[i-d]=1;

                if(i+d<=n && psum[i+d]==0)
                    forced[i+d]=1;
            }
        }
    }

    vector<int> v;

    for(int i=1;i<=n;i++){
        if(psum[i]==0 && forced[i]==0)
            v.push_back(i);
    }

    ll treasure_map_fin=1;

    if(!v.empty()){
        int len=1;

        for(int j=0;j<(int)v.size();j++){

            if(j==(int)v.size()-1){
                treasure_map_fin =
                    treasure_map_fin*fib[len+2]%MOD;
                break;
            }

            int x=v[j];
            int y=v[j+1];

            bool ok=false;

            if((y-x)%2==0){
                int mid=(x+y)/2;
                int d=(y-x)/2;

                if(arr[mid]==d)
                    ok=true;
            }

            if(ok){
                len++;
            }
            else{
                treasure_map_fin =
                    treasure_map_fin*fib[len+2]%MOD;

                len=1;
            }
        }
    }

    bool all=true;

    for(int i=1;i<=n;i++){
        if(arr[i]!=-1){
            all=false;
            break;
        }
    }

    if(all){
        treasure_map_fin--;
        if(treasure_map_fin<0)
            treasure_map_fin+=MOD;
    }

    cout<<treasure_map_fin<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<MAXN;i++)
        fib[i]=(fib[i-1]+fib[i-2])%MOD;

    int T = 1;
    cin >> T;

    while(T--) solve();
}
