class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int answer = 0;
        unordered_set<int>table(nums.begin(),nums.end());

        for(auto num:nums){
            int streak = 0;
            int curr = num;
            while(table.find(curr)!=table.end()){
                streak++;
                curr++;
            }
            answer = max(answer,streak);
        }
        return answer;
    }
};
