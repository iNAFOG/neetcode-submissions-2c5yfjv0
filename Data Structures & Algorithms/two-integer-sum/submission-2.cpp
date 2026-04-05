class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>lookup;
        vector<int>answer;
        for(int i=0;i<n;i++)
        {
            lookup[nums[i]]=i;
            //putting every element in the map
        }
        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            if(lookup.find(diff) != lookup.end() && lookup[diff] != i){
                answer.push_back(i);
                answer.push_back(lookup[diff]);
                return answer;
            }
            
        }
        return{};
        
    }
};
