class Solution {
public:
    void sortColors(vector<int>& nums) {
        map <int, int> freq;
        for(auto x:nums){
            freq[x]++;
        }
        int idx=0;
        for(auto x: freq){
            int color= x.first;
            int count= x.second;
            for(int i=1; i<=count; i++){
                nums[idx++]=color;
            }
        }
    }
};