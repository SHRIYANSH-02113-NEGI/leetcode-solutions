class Solution {
    public int[] getAverages(int[] nums,int k){
        int n=nums.length;
        int[] result=new int[n];
        for(int i=0;i<n;i++) result[i]=-1;
        if(k==0) return nums;
        if(2*k+1>n) return result;
        long[] prefix=new long[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+nums[i];
        for(int i=k;i+k<n;i++){
            int left=i-k,right=i+k;
            long sum=prefix[right];
            if(left>0) sum-=prefix[left-1];
            result[i]=(int)(sum/(2*k+1));
        }
        return result;
    }
}
