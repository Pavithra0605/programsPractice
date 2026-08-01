class Solution {
    public int maxRotateFunction(int[] nums) {
     int n=nums.length;
      int total=0;
      long currf=0; long maxf=0;
      for(int i=0;i<n;i++){
        total +=nums[i];
        currf +=(i*nums[i]);
      }  
       maxf=currf;
      for(int li=n-1;li>0;li--){
        currf=currf-(nums[li]*(n-1))+(total-nums[li]);
        maxf= Math.max(maxf,currf);
      }
      return (int)maxf;
    }
}
