class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxFreq=0;
        int element=0;
        for(auto p:nums){
            freq[p]++;
        }
        for(auto x:freq){
            if(x.second>maxFreq){
                maxFreq=x.second;
                element=x.first;
            }
        }
        return element;

    }
};