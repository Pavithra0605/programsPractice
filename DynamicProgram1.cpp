
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,m, i,j,k;
    cin>>n>>m;
   int mat1[n][m];
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cin>>mat1[i][j];
       }
   }
   int dp[n][m];
   for(j=0;j<m;j++){
      dp[0][j] = mat1[0][j];
  }
   for (i=1;i<n;i++){
      for(j=0;j<m;j++){
         int max=0;
           for(k=0;k<m;k++){
               if(k!=j){
                   if(dp[i-1][k]>max)
                       max=dp[i-1][k];
               }
               }
               dp[i][j] =mat1[i][j]+max;
           
       }
   }
       int answer = dp[n-1][0];
       for(j=1;j<m;j++){
           if(dp[n-1][j]>answer)
           answer = dp[n-1][j];
      }
      cout<<"Sum of the Maximum = "<<answer;
    return 0;
}
