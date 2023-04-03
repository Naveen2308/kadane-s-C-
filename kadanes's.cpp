 int maxSubArray(vector<int>& nums) {
        int lmax=nums[0],gmax=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] > (nums[i]+lmax)){
                lmax=nums[i];
            }
            else{
                lmax=lmax+nums[i];
         
            }
               gmax=max(lmax,gmax);
        }
        
        return gmax;
    }