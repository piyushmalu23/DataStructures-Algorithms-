class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int t=nums.size();
        long long final=-1000000000001;
        for(int i=0;i<t;i++){
            long long sum=nums[i];
             if(final<sum){
                    final=sum;
                }
            for(int j=i+1;j<t;j++){
                sum+=nums[j];
                if(final<sum){
                    final=sum;
                }
            }
        }
        return final;
    }
};
