    #include <iostream>
    #include<algorithm>
    #include<vector>
    #include<map>
    #include<set>
    #include<queue>
    using namespace std;
    #define ll long long int
    void solve(){
    int x,y; cin>>x>>y;
    int total =x+y, rx=0, ry=0;
    for(int sh=30;sh>=0;sh--){
        if((total &(1<<sh))!=0){
            if((rx|(1 << sh)) <= x) {
            rx=rx|(1 << sh);
            }else{
            ry=ry|(1 << sh);
            }        
        }
    }
    cout <<total<< " "<< x-rx << endl;
    }
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int T = 1;
        cin >> T;
        while(T--) solve();
    }
