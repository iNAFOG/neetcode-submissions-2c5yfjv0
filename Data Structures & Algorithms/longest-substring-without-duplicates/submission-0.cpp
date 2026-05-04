class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;

        int answer = 0;
        unordered_set<char>hashmap;
        while(right < s.size()){
            if(left>right) break;
            
            if(!(hashmap.contains(s[right]))){
                hashmap.insert(s[right]);
                answer = max(answer,right - left + 1);
                right++;
            }

            else{
                hashmap.erase(s[left]);
                left++;
            }

        }

        return answer;
    }
};
