// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> M;
        
        for(int i=0; i<nums.size(); i++){
            if(M.find(target - nums[i])!=M.end()){
                ans.push_back(M[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else{
                M[nums[i]] = i;
            }
        
        }
        
        return ans;
    }
    
};