#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main() {
    //Your Code goes here!
int n; cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
 cin>>arr[i];
}
sort(arr.begin(),arr.end());
ll count =0;

for(int a:arr){
    auto ubit = upper_bound(arr.begin(),arr.end(), a);
    int high=arr.end()-ubit;
    auto lbit = lower_bound(arr.begin(),arr.end(),a);
    int low=lbit-arr.begin();
    count +=1LL*high*low;
}
cout<<count<<endl;
    return 0;
}
