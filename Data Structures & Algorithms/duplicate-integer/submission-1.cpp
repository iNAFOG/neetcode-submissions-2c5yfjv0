class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for (auto i=1;i<size;i++){
            if(nums[i-1]==nums[i]){
                return true;
            }
        }
        return false;
    }
};