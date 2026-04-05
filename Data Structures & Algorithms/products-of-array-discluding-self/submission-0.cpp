class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>answer;
        int mul;
        for(int i=0;i<n;i++){
            mul = 1;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                mul = nums[j] * mul;
            }
            answer.push_back(mul);
        }
        return answer;
    }
};
