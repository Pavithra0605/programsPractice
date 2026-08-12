#include <iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
int Len,N;
cin>>Len>>N;
set<int> st;
vector<int> ans;
st.insert(0); st.insert(Len);
while(N--){
    int qt,x; 
    cin>>qt>>x;
    if(qt==1){
        st.insert(x);
    }
    else{
        auto it = st.upper_bound(x);
       ans.push_back(*it-*(prev(it)));
    }
}
for(int i:ans){
    cout<<i<<endl;
}
    return 0;
}
