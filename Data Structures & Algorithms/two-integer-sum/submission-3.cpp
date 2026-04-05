class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>lookup;
        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            if(lookup.find(diff)==lookup.end())
            {
                lookup[nums[i]] = i;
            }
            else return{lookup[diff],i};
            
        }
    }
};
