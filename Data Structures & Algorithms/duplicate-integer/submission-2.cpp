class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==set(nums.begin(),nums.end()).size()) return false;
        else return true;
    }
};