class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int totalSubsets = 1 << n; 
        vector<vector<int>> ans;
        
        for(int num = 0; num < totalSubsets; num++) {
            vector<int> currentList; 
            for(int i = 0; i < n; i++) {
                if((num & (1 << i)) != 0) {
                    currentList.push_back(nums[i]);
                }
            }
            ans.push_back(currentList);
        }
        
        return ans;
    }
};