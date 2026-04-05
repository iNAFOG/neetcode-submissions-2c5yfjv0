class Solution {
public:
    int maxArea(vector<int>& heights) {
        int answer = 0;
        int left = 0;
        int right = heights.size()-1;

        while(left<right){
            int width = right - left;
            int water = min(heights[left],heights[right])*width;
            answer = max(water,answer);

            if(heights[left]<heights[right]){
                left++;
            }
            else right--;

        }
        return answer;
    }
};
