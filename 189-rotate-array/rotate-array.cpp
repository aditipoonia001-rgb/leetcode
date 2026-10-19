class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> dupe= nums;
        
        int n= nums.size();
        k=k%n;
        for(int i=0; i<n-k; i++){
            nums[k+i]=dupe[i];
        }
        for(int j=n-k; j<n; j++){
            nums[j-(n-k)]= dupe[j];
        }
    }
};