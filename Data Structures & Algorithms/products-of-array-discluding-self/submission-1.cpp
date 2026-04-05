class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>answer;
        vector<int>preMul;
        vector<int>sufMul(n);
        //this approach i am trying to make 2 arrays 1 for prefix multiply and another suffix multiply
        
        int mul = 1;

        for(int i=0;i<n;i++){
            preMul.push_back(mul);
            mul = mul*nums[i];
        }
        mul = 1;
        for(int i=n-1;i>=0;i--){
            sufMul[i]=mul;
            mul = mul*nums[i];
        }
        mul = 1;
        for(int i=0;i<n;i++){
            mul = preMul[i]*sufMul[i];
            answer.push_back(mul);
        }

        return answer;

    }
};
