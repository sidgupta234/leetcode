// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN, max_tillnow=0, largestVal=INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            max_tillnow+=nums[i];
            ans = max(ans, max_tillnow);
            
            if(max_tillnow<0)
                max_tillnow=0;
                
            largestVal = max(largestVal, nums[i]);
        }
        
        return max(ans, largestVal);
    }
};