class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int maxSum = INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mx = max(mx,nums[i]);
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }

            maxSum = max(sum,maxSum);
        }
        if(maxSum==0){
           return mx;
        }

        return maxSum;
    }
};